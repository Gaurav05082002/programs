// problem>
// Given n, i.e. total number of nodes in an undirected graph numbered from 1 to n and an integer e, i.e. total number of edges in the graph. Calculate the total number of connected components in the graph. A connected component is a set of vertices in a graph that are linked to each other by paths.
// sample input
// 8 5
// 1 2
// 2 3
// 2 4
// 3 5
// 6 7

#include <bits/stdc++.h>
using namespace std;
//array of vectors
int n , m;
int vis[1001]; 
vector<int> graph[1001];
vector<vector<int>> cc;
vector<int> current_cc;
void dfs(int vertex , int comp){
    // take action on vertex after entering the vertex
    vis[vertex]=comp;
    current_cc.push_back(vertex);

    for(int child : graph[vertex]){
         // take action on child before entering 
        if(vis[child]>0) continue;
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
         if(vis[i]==0){
            cnt++;
            current_cc.clear();
            dfs(i,cnt);
            cc.push_back(current_cc);
            
         }
   }
   cout<<"count"<<cnt<<endl;
   cout<<"print the components"<<endl;
   for(auto c_cc : cc){
    for(int vertex : c_cc){
        cout<<vertex<<" ";
    }
    cout<<endl;
   }
   
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t; cin>>t; while(t--)
    solve();
}