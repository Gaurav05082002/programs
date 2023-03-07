#include <bits/stdc++.h>
using namespace std;
void solve()
{
   int n, m;
    cin>>n>>m;
    int a[n];
    int count=0;
     int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    for(int i=0; i<n; i++)
    {
      sum+=a[i];
        if(sum>m)
            break;
        else
            count++;
        
    }
    cout<<count<<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}