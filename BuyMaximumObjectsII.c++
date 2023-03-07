#include <bits/stdc++.h>
using namespace std;
void solve()
{
   long long int n, q;
    cin>>n>>q;
    long long int a[n];
    for(long long int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
    sort(a, a+n);
    for(long long int i=1; i<n; i++)
    {
        a[i]+=a[i-1];
    }
    while(q--){
        long long int m;
        cin>>m;
        auto it=upper_bound(a, a+n, m)-a;
        cout<<it<<endl;
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //int t; cin>>t; while(t--)
    solve();
}