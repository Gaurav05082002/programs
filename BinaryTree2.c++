// Build Tree from Preorder and Inorder | C++ Placement Course | Lecture 27.3 /apna college
// Build Tree from Postorder and Inorder | C++ Placement Course | Lecture 27.4 / apna college
// Level Order Traversal , Sum at Kth Level In Binary Tree | C++ Placement Course | Lecture 27.5
// Count and Sum of Nodes | C++ Placement Course | Lecture 27.6
#include <bits/stdc++.h>
using namespace std;

// Definition of a binary tree node
struct node
{
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Function to search for an element in the inorder array
int search(int inorder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

// Function to build the binary tree from given preorder and inorder traversals
node *buildtree(int preorder[], int inorder[], int start, int end)
{
    static int idx = 0; // Using static so that idx retains its value in recursive calls
    if (start > end)
    {
        return NULL;
    }

    int curr = preorder[idx];
    idx++;

    node *Node = new node(curr);

    if (start == end)
    {
        return Node;
    }

    int pos = search(inorder, start, end, curr);
    Node->left = buildtree(preorder, inorder, start, pos - 1);
    Node->right = buildtree(preorder, inorder, pos + 1, end);

    return Node;
}

// form post order and inorder
node *buildtree2(int postorder[], int inorder[], int start, int end)
{
    static int idx = end;
    if (start > end)
    {
        return NULL;
    }

    int curr = postorder[idx];
    idx--;

    node *Node = new node(curr);

    if (start == end)
    {
        return Node;
    }

    int pos = search(inorder, start, end, curr);
    Node->right = buildtree2(postorder, inorder, pos + 1, end);
    Node->left = buildtree2(postorder, inorder, start, pos - 1);

    return Node;
}

void printLevelOrderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *node = q.front();
        q.pop();
        if (node != NULL)
        {   cout<<node->data<<" ";
            if (node->left != NULL)
            {
                q.push(node->left);
            }
            if (node->right != NULL)
            {
                q.push(node->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
    q.pop();
}

int sumatlevelk(node* root , int k){

    if(root==NULL){
        return -1;
    }
    queue<node*>q;
    q.push(root);
    q.push(NULL);
     int level =0;
     int sum =0;
     while(!q.empty()){
           node* node = q.front();
           q.pop();
           if(node != NULL){
              if(level == k){
                sum+=node->data;
              }
              if(node->left != NULL){
                q.push(node->left);

              }
              if(node->right != NULL){
                q.push(node->right);
                
              }
           }
           else if( !q.empty()){
            q.push(NULL);
            level++;
           }
     }
     return sum;


}

int countnodes(node* node){
    if(node == NULL){
        return 0;
    }
    return countnodes(node->left) + countnodes(node->right) +1;
}
int sumofnodes(node* node){
    if(node == NULL){
        return 0;
    }
    return countnodes(node->left) + countnodes(node->right) + node->data;
}
int calheight(node* node){
    if(node == NULL){
        return 0;
    }
    int lheight= calheight(node->left);
    int rheigth = calheight(node->right);
    return max(lheight ,rheigth)+1;
}


int caldiameter(node* node){
    // diameter is the number of nodes on longest path connecting two leaf modes 
    // either this dia can go from the roort 
    // not going from the root
    // this method is n2

    if(node == NULL){
        return 0;
        
    }
    int lh = calheight(root->left);
    int rh = calheight(node-> right);
    int currDia = lh+rh+1;
    int ld = caldiameter(node->left);
    int rd = caldiameter(node->right);
    return max(currDia , max(ld, rd));

}

//decreasing tC OF dia ;
// The above implementation can be optimized by calculating the height in the same recursion rather than calling a height() separately. 
int diameterOpt(struct node* root, int* height)
{
    // lh --> Height of left subtree
    // rh --> Height of right subtree
    int lh = 0, rh = 0;
 
    // ldiameter  --> diameter of left subtree
    // rdiameter  --> Diameter of right subtree
    int ldiameter = 0, rdiameter = 0;
 
    if (root == NULL) {
        *height = 0;
        return 0; // diameter is also 0
    }
 
    // Get the heights of left and right subtrees in lh and
    // rh And store the returned values in ldiameter and
    // ldiameter
    ldiameter = diameterOpt(root->left, &lh);
    rdiameter = diameterOpt(root->right, &rh);
 
    // Height of current node is max of heights of left and
    // right subtrees plus 1
    *height = max(lh, rh) + 1;
 
    return max(lh + rh + 1, max(ldiameter, rdiameter));
}
 

// Function to perform inorder traversal and print the elements
void inorderprint(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderprint(root->left);
    cout << root->data << " ";
    inorderprint(root->right);
}

// Main function to solve the problem
void solve()
{
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};
    int postorder[] = {4, 2, 5, 3, 1};

    // Build the binary tree using the given preorder and inorder traversals
    node *ans = buildtree(preorder, inorder, 0, 4);

    // Print the inorder traversal of the constructed binary tree
    inorderprint(ans);
    cout << endl;
    // Build the binary tree using the given postorder and inorder traversals
    node *ans2 = buildtree2(postorder, inorder, 0, 4);
    inorderprint(ans2);
    cout << endl;

    printLevelOrderTraversal(ans2);
    cout << endl;

    cout<<sumatlevelk(ans2 , 1);
    cout << endl;

    cout<<countnodes(ans2);
    cout<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve(); // Call the solve function to build and print the binary tree
    return 0;
}
