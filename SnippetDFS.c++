

#include <bits/stdc++.h>
using namespace std;
//array of vectors
int n , m;
bool vis[1001]; 
vector<int> graph[1001];

void dfs(int vertex , int comp , int k){
    // take action on vertex after entering the vertex
    vis[vertex]=true;
   f

    for(int child : graph[vertex]){
         // take action on child before entering 
        if(vis[child]) continue;
        dfs(child,comp);
        //take action on child after exiting child node 
    }
    // take action on vertex before exiting it 
}

void solve()
{   int cnt=0;
   cin>>n>>m;
   for (int i = 0; i < m; i++)
   {
       int v1;
       int v2;
       cin>>v1>>v2;
       graph[v1].push_back(v2);
        graph[v2].push_back(v1);
   }
   for (int i = 1; i <= n; i++)
   {
         if(!vis[i]){
           
         
            dfs(i);
           
            
         }
   }
   cout<<"count"<<cnt<<endl;
   
   
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t; cin>>t; while(t--)
    solve();
}