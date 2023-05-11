#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
   int n;
    cin>>n;
    set<int> st;
    
    
    
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            st.insert(i);
            int x=n/i;
            st.insert(x);
        }
    }
    for(auto it:st)
    {
        cout<<it<<" ";
    }
    cout<<'\n';
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //int t; cin>>t; while(t--)
    solve();
}