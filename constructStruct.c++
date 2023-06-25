// Description

// Design a Data Structure which can support the following queries:

// Initially, the structure is empty. You have given an integer K. 

// The structure is arranged in the order from greater elements to smaller elements. So when we say top K elements, we mean the top K largest elements.

// 1 x: Add x in structure.

// 2 x: Remove x from the structure if present in the structure. If x doesn't present in the structure, do nothing. If there are multiple occurrences of x, delete only one occurrence of x.

// 3 ?: Print the sum of the top K elements. If the structure contains less than K elements, then print the sum of all elements present in the structure. If the structure is empty, then print 0.


// Input Format

// The first line of input contains Q and K - the number of queries.
// Next, Q lines contain queries of the format specified in the statement. 


// Output Format

#include <bits/stdc++.h>
using namespace std;
#define int long long
struct nolan {
        multiset<int, greater<int>> p;
        void add(int x){
           p.insert(x);  
        };
        void remove(int x){
        p.erase(p.find(x));
        };
        void print(int k){
            int sum=0;
            auto itr = p.begin();
            for (int i = 0; i < k && itr != p.end(); ++i, ++itr) {
             // Access the current element using *itr
             // Perform desired operations with the element
             sum = sum + *itr;
             }
        cout<<sum;
        };
        
    };
void solve()
{
    nolan crist;
    int q,k;
    cin>>q>>k;
    while(q--){
      int a,b;
        char y;
        cin>>a;
        if(a==1){
            cin>>b;
            crist.add(b);
        }
        if(a==2){
            cin>>b;
            crist.remove(b);
        }
        if(a==3){
            cin>>y;
            crist.print(k);
                cout<<endl;
        }
    }
    
    
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t; cin>>t; while(t--)
    solve();
}