#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, m, k;
vector<int> a, b;
bool check(int x)
{
   int count=0;
   for(int i=0; i<n; i++)
   {
       count+=upper_bound(b.begin(), b.end(), x-a[i])-b.begin();
   }
    return count>=k;
}
void solve()
{
   cin>>n>>m>>k;
    a.resize(n);
    b.resize(m);
    
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<m; i++)
        cin>>b[i];
    
    if(n>m)
    {
        swap(n, m);
        swap(a, b);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int lo=a[0]+b[0];
    int hi=a[n-1]+b[m-1];
    int ans=0;
    while(lo<=hi)
    {
        int mid;
        mid=(lo+hi)/2;
        
        if(check(mid))
        {
            ans=mid;
            hi=mid-1;
        }
        else
            lo=mid+1;
    }
    cout<<ans<<endl;
    
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}