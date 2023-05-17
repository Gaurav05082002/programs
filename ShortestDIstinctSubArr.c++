#include <bits/stdc++.h>
using namespace std;
#define int long long
int freq[1000100];
void solve()
{
   int n;
    cin>>n;
    int arr[n];
    
    set<int> st;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        st.insert(arr[i]);
    }
    int head=-1;
    int tail=0;
    int distinct=0, ans=INT_MAX;
    int k=st.size();
    while(tail<n)
    {
        while(head+1<n && distinct<k)
        {
            head++;  
            if(freq[arr[head]]==0)
            distinct++;
            freq[arr[head]]++;
        }
        if(distinct==k)
        ans=min(ans, head-tail+1);
        if(head>=tail)
        {
            freq[arr[tail]]--;
            if(freq[arr[tail]]==0)
                distinct--;
            tail++;
         }
        else
        {
            tail++;
            head=tail-1;
        }
    }
    cout<<ans<<endl;
    for(int i=0; i<n; i++)
    {
        freq[arr[i]]=0;
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}