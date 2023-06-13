// You have been given a tree with N nodes and N - 1 edges. You want to colour each node, such that no two adjacent nodes (directly connected by an edge) and no two nearly-adjacent nodes (both directly connected to a common node with edges) has the same colour. 
// Your task is to find the minimum number of colours required to accomplished this. 


// Input Format

// The first line of input contains N. Each of the remaining N−1 lines describes an edge in terms of the two nodes it connects.


#include <bits/stdc++.h>
using namespace std;
vector<int> g[100001];
int vis[100001];
map<int,int>deg;
int n;
void dfs(int vertex){
      vis[vertex]=1;
      deg[vertex]=0;
      for(auto child : g[vertex]){
          deg[vertex]++;
          if(vis[child]) continue;
          dfs(child);
          
      }
}
void solve(){
      cin>>n;
   int maxd=0;
   for (int i = 0; i < n-1; i++)
   {
     int v1,v2;
     cin>>v1>>v2;
     g[v1].push_back(v2);
     g[v2].push_back(v1);

   }
   for (int i = 0; i < n; i++){
     if(!vis[i]){
        dfs(i);
     }
   }
   for (int i = 1; i <=  n; i++)
   {
    // cout<<"vertex"<<i<<" "<<"deg"<<deg[i]<<endl;
    if(deg[i]>maxd){
        maxd=deg[i];
    }
        
   }
   cout<<maxd+1<<endl;
   

   
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t; cin>>t; while(t--)
    solve();
}