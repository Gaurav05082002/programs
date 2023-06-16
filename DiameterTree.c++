// depth of diameter by two bfs method  
// take any random point and get the farthest node from it , from that farthest node get the depth / dis of all other node and get farthest node v then,  dep[v] will give answeer
#include <bits/stdc++.h>
using namespace std;
vector<int> g[100100];
int dep[100100];
int par[100100];

void dfs( in t node , int parent , int depth){
     dep[node]=depth;
     par[node]=parent;
     

     for(auto v: g[node]){
        if(v!=parent){
          
            dfs(v,node,depth+1);
            
            }
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
//choosing random point 
int maxch =1;
for (int  j = 2; j <= n ; j++)
{
    if(dep[j]>dep[maxch]){
        maxch=j;
    }
}
// got farthest node as maxch 
// get farthest node from maxch
dfs(maxch,0,0);
for (int  j = 2; j <= n ; j++)
{
    if(dep[j]>dep[maxch]){
        maxch=j;
    }
}
// depth of that node will give the diameter 
cout<<dep[maxch]<<endl;




   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}