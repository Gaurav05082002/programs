#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n ;
    cin>>n ;
    
    float m;
    cin >> m ;
    int y = int(m);
    int z = (m - y)*10;
    cout << (z+n);
    cout << ".";
    cout << (y+n);
    
    
    
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}