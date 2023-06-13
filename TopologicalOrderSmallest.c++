// bfs topo
// kahn's algo
//this below variation will give you lexicographically smallest topological ordering 
// You are given a directed acyclic graph with 
// n vertices and m edges. There are no self-loops or multiple edges between any pair of vertices. The graph can be disconnected.

// You should assign labels to all vertices in such a way that:

// Labels form a valid permutation of length n— an integer sequence such that each integer from 1to n
//  appears exactly once in it.
// If there exists an edge from vertex v to vertex u then 
// label v should be smaller than 
// lable u
// .
// Permutation should be lexicographically smallest among all suitable.
// Find such a sequence of labels to satisfy all the conditions.





#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> g;
vector<int> indeg;
vector<int> topo;
int n,m;
void kahn(){
    priority_queue<int>q;
    for (int i = 1; i <=n ; i++)
    {
          if(indeg[i]==0)q.push(-i);
    }
    while(!q.empty()){
        int cur = -q.top();
        q.pop();
        topo.push_back(cur);
        for(auto v: g[cur]){
            indeg[v]--;
            if(indeg[v]==0){
                q.push(-v);
            }
        }
    }
    
}

void solve()
{
 
   cin>>n>>m;
   g.resize(n+1);
   indeg.assign(n+1,0);
   for (int i = 0; i < m; i++)
   {
       int a,b;
       cin>>a>>b;
       g[a].push_back(b);
       indeg[b]++;
   }
   kahn();
   for( auto v: topo){
    cout<<v<<" ";
   }
   
   
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}