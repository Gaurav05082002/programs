#include <bits/stdc++.h>
using namespace std;
void solve()
{
   int n,k;
   cin>>n>>k;
   int a[n];
   for (int i = 0; i < n; i++)
   {
      cin>>a[i];
    
   }
   int sum =0;
   multiset<int> mySet;
   for (int i = 1; i < n; i++)
   {
        sum = sum+abs(a[i]-a[i-1]);
        mySet.insert(abs(a[i]-a[i-1]));
   }
   
    
    // Reverse the printing order by using reverse iterators
    auto it = mySet.rbegin();
    for (int i = 0; i < k - 1 && it != mySet.rend(); ++i, ++it) {
        sum= sum - *it;
    }

  
    cout<<sum<<endl;
   
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}