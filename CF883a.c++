#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int cnt=0;
    for (int  i = 0; i < n; i++)
    {
        int a;
        int b;
        cin>>a>>b;
        if(a>b){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}