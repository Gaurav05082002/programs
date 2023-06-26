#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
  int a, b, c;
    cin>>a>>b>>c;
    int g=__gcd(a, b);
    if(c%g==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}