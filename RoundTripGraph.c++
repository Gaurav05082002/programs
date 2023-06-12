#include <bits/stdc++.h>
using namespace std;
int n,m;
bool vis[100001];
vector<int> g[100001];
bool dfs(int vertex , int par){
       bool isLoopExists = false;
       vis[vertex]=true;
       for(int child : g[vertex]){
        if(child==par) continue;
        if(vis[child]){
            // here write the condition you want in round trip
            if(abs(vertex-child)>=2){
                return true;
            }
        }
        isLoopExists |= dfs(child , vertex);
          
       }
       return isLoopExists;
}
void solve()
{
   cin>>n>>m;
    int cnt=0;
   for (int i = 0; i < m; i++)
   {
       int v1,v2;
       cin>>v1>>v2;
       g[v1].push_back(v2);
       g[v2].push_back(v1);
   }
   for (int i = 1; i <=n ; i++)
   {    
        if(!vis[i]){
            
             cnt= cnt + dfs(i,0);
        }
   }
   if(cnt>0){
    cout<<'YES'<<endl;
   }
   else{
    cout<<'NO'<<endl;
   }
   
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t; cin>>t; while(t--)
    solve();
}


