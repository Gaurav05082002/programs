#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n , m;
  cin>>n>>m;
  map<int,int>xaxis;
  int coll = 0 ;
  for (int i = 0; i < n; i++)
  {
    int x,u;
    cin>>x>>u;
    xaxis[x*u]++;

  }
  for (int i = 0; i < m; i++)
  {
    int y,v;
    cin>>y>>v;
    if(xaxis[y*v]>0){
        coll++;
        xaxis[y*v]--;
    }
  }
  cout<<coll<<endl;
  
  

}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}