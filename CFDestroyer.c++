#include <bits/stdc++.h>
using namespace std;
void solve()

{  int n; 
cin>>n;
map<int, int> fr;

    for (auto& pair : fr) {
        pair.second = 0;
    }

for (int i = 0; i < n; i++)
{ int x;
  int maxn=0;
    cin>>x;
    maxn=max(maxn,x);
    map[x]++;
}
for (int i = 0; i < maxn; i++)
{   if(i!=0){
      if(map[i]==0){
        cout<<"NO"<<endl;
        return;
      }
    }
    if(map[i+1]>map[i]){
        cout<<"NO"<<endl;
        return;
    }
}
cout<<"YES"<<endl;


   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}