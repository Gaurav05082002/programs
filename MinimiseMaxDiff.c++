#include<bits/stdc++.h>
using namespace std;
#define int long long

int n,k;
int arr[100100];
bool check(int x){
    int needed=0;
    for(int i=1;i<n;i++){
        needed+=(((arr[i]-arr[i-1])+x-1)/x)-1;
    }
    return needed<=k;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int lo=1;
        int hi=0, ans=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i>0){
            hi=max(hi,(arr[i]-arr[i-1]));
            }
        }
        while(lo<=hi){
            int mid=(hi+lo)/2;
            if(check(mid)){
                ans=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        cout<<ans<<"\n";
    }
}