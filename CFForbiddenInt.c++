#include <bits/stdc++.h>
using namespace std;
void solve()
{
   int n,k,x;
   cin>>n>>k>>x;
   if(x!=1){
        cout<<"YES"<<endl;
        cout<<n<<endl
        for (int i = 0; i < n; i++)
        {
            cout<<1<<" ";
        }
        cout<<endl;
        return;
        
   }else{
       if(k=2){
        if(n%2==0){
            cout<<"YES"<<endl;
        cout<<n<<endl
        for (int i = 0; i < n/2; i++)
        {
            cout<<2<<" ";
        }
        cout<<endl;
        return;
        }
       }
       else if (k=3)
       {
            if(n%2==0){
            cout<<"YES"<<endl;
            cout<<n<<endl
            for (int i = 0; i < n/2; i++)
            {
            cout<<2<<" ";
            }
           cout<<endl;
           return;
            }
            else{
                cout<<"YES"<<endl;
            cout<<n<<endl
            for (int i = 0; i < n/2-1; i++)
            {
            cout<<2<<" ";
            
            }
            cout<<3;
           cout<<endl;
           return;
            }
       }
    
   }
   cout<<"NO"<<endl;
 }
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}