#include <bits/stdc++.h>
using namespace std;
int n,m,q;
int vis[100001];
vector<int> g[100001];
map<int,int> freq;
void dfs(int vertex , int comp){
    vis[vertex]=comp;
    freq[comp]++;
    for (int child : g[vertex])
    {
         if(vis[child]>0){continue;}
        dfs(child,comp);
    }
    
}
void solve()
{
   cin>>n>>m>>q;
  
   int cnt=0;
   for (int i = 0; i < m; i++)
   {
       int v1;
       int v2;
       cin>>v1>>v2;
       g[v1].push_back(v2);
        g[v2].push_back(v1);
   }
   for (int i = 1; i <= n; i++)
   {
         if(!vis[i]){
            cnt++;
            dfs(i,cnt);
         }
   }
//   for(auto child : freq){
//       cout<<child.first<<" " <<child.second<<endl;
//   }
//   cout<<"vis"<<endl;
//   for(int i=1; i<=n; i++){
//       cout<<"i="<<i<<"vis[i]"<<vis[i]<<endl;
//   }
//   cout<<"ans"<<endl;
   while (q--)
   {
        int qa;
        cin>>qa;
        if(qa==1){
            int qb;
            cin>>qb;
            cout<<freq[vis[qb]]<<endl;
        }
        if(qa==2){
            int qc,qd;
            cin>>qc>>qd;
            if(freq[vis[qc]]==freq[vis[qd]]){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
   }
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
   
    solve();
}