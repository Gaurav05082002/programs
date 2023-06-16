// get depth parent sub tree size ,number of child for every node of gtree
 

#include <bits/stdc++.h>
using namespace std;
vector<int> g[100100];
int dep[100100];
int par[100100];
bool isleaf[100100];
int subtreesz[100100];
int numchild[100100];
void dfs( in t node , int parent , int depth){
     dep[node]=depth;
     par[node]=parent;
     numchild[node]=0;
      subtreesz[node]=1;

     for(auto v: g[node]){
        if(v!=parent){
            // if neighbour is not parent then it is in subtree
            numchild[node]++;
            dfs(v,node,depth+1);
            subtreesz[node]+=subtreesz[v];
        }
     }

     if(numchild == 0){
        isleaf[node]=1;
     } 



}
void solve()
{   int n;
cin>>n;
for (int i = 0; i < n-1; i++)
{
     int a,b;
     cin>>a>>b;
     g[a].push_back(b);
     g[b].push_back(a);
}
dfs(1,0,0);

   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}