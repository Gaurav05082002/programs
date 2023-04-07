#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int far[n];
    int sar[n];
    for(int i=0; i<n; i++){
        cin>>far[i];
    }
    for(int i=0; i<n; i++){
        cin>>sar[i];
    }
    int maxinfar = *max_element(far, far + n);
    int maxinsar = *max_element(sar, sar + n);
    if(maxinfar==far[n-1] && maxinsar==sar[n-1]){
              cout<<"YES"<<endl;
               return;
    }
    for (int i = 0; i < n; i++)
    {    
         for (int j = 0; j < n; j++)
         {
        
          int temp = far[i];
         far[i]=sar[j];
         sar[j]=temp;
         int maxinfar = *max_element(far, far + n);
         int maxinsar = *max_element(sar, sar + n);
         if(maxinfar==far[n-1] && maxinsar==sar[n-1]){
              cout<<"YES"<<endl;
               return;
         }
         sar[j]=far[i];
         far[i]=temp;
         

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