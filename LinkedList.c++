#include <bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node* next;
   
  


    //the function to create a new node 
    node(int val){
        data = val;
        next=NULL;
    }
};
//& sending head with reference we can change the head 

void insertAtTail(node* &head , int val ){
    node* n = new node(val);
    //if there is no element in linked list 
    if(head==NULL){
        head=n;
        return;
    }
    //have an itr
    h 1a 2b 3c 4null
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
};

bool search(node* head , int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}


void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deleteAthead(node* &head){
    node* todelete = head;
    head=head->next;
    delete todelete;
}
void deletion(node* &head, int val){
    if(head==NULL){
        return;
    }
    //if first element is last element 
    if(head->next==NULL){
        deleteAthead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete = temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head,4);
    display(head);
    deletion(head,1);
    display(head);

}