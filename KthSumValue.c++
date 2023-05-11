#include <bits/stdc++.h>
using namespace std;
using lli = long long
lli n , m ,k ;
vector<lli>arr,brr;
bool check(int x){
lli cnt=0;
for(int i =0; i<n; i++){
    cnt+=upper_bound(brr.begin(),brr.end(), x-arr[i]) - brr.begin();}
    return cnt>=k;
}


    
void solve()
{
    cin>>n>>m>>k;
    arr.resize(n);
    arr.resize(m);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<m; i++){
        cin>>brr[i];
    }
    if(n>m){
        swap(n,m);
        swap(arr,brr);
    }
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());
    lli lo = arr[0]+brr[0];
    lli hi = arr.back()+brr.back();
    lli ans = hi;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(check(mid)){
            ans=mid;
            hi = mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    cout<<ans;
    
    
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}