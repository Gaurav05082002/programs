// Zenithland has n cities and m roads between them. The goal is to construct new roads so that there is a route between any two cities. A road is bidirectional.
// Your task is to find out the minimum number of roads required.


// Input Format

// The first input line has two integers n and m: the number of cities and roads. The cities are numbered 1, 2, …, n.
// After that, there are m lines describing the roads. Each line has two integers a and b: there is a road between those cities.
// A road always connects two different cities, and there is at most one road between any two cities.

#include <bits/stdc++.h>
using namespace std;
vector<int> g[100001];
int vis[100001];
void dfs(int vertex){
    vis[vertex]=1;
    for(auto child : g[vertex]){
        if(vis[child]==1) continue;
        dfs(child);
    }
}
void solve()
{   cin>>n>>m;
   for (int i = 0; i < m; i++)
   {
     int v1,v2;
     cin>>v1>>v2;
     g[v1].push_back(v2);
     g[v2].push_back(v1);
   }
   for (int i = 1; i <= n; i++)
   {
       if(!vis[i]){
           cnt++;
           dfs(i);#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> g[100001];
int vis[100001];
void dfs(int vertex){
    vis[vertex]=1;
    for(auto child : g[vertex]){
        if(vis[child]==1) continue;
        dfs(child);
    }
}
void solve()
{   cin>>n>>m;
   for (int i = 0; i < m; i++)
   {
     int v1,v2;
     cin>>v1>>v2;
     g[v1].push_back(v2);
     g[v2].push_back(v1);
   }
   int cnt=0;
   for (int i = 1; i <= n; i++)
   {
       if(!vis[i]){
           cnt++;
           dfs(i);
       }
   }
   cout<<cnt-1<<endl;
   
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t; cin>>t; while(t--)
    solve();
}
       }
   }
   cout<<cnt-1;
   
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}