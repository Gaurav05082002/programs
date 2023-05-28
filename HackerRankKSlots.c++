#include <bits/stdc++.h>
using namespace std;
void solve()
{ int n,k;
  cin>>n>>k;
  int a[n];
  map<int,int>freq;
  int ans=0;
  for (int i = 1; i <= k; i++)
  {
    freq[i]=2;
  }
  
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  sort(a, a + n);

  for (int i = 0; i < n; i++)
  {   
    if(a[i]<=k){
        ans=ans+a[i];
        freq[a[i+1]]--;
    }
    
  }
  for (int i = 0; i < n; i++)
  {   
     if(a[i]>k){
        cout<<a[i]<<"going in loop"<<endl;
        int temp =0;
        int whichj=1;
        for (int j = 1; j < k; j++)
        {
            if(freq[j]>0){
                int comp = a[i]&j;
                if(comp>temp){
                    temp = comp;
                    whichj =j;
                }
            }
        }
        ans=ans+temp;
        freq[whichj]--;
        



     }
  }
  
  
//   for (int i = 0; i < n; i++)
//   {
//      cout<<a[i];
//   }
  cout<<ans<<endl;
  
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}