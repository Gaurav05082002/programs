#include <bits/stdc++.h>
using namespace std;
void solve()
{
   
   int n , k;
   cin>>n>>k;
   int arr[100000];
   for (int i = 0; i < n; i++)
   {
    int a;
    cin>>a;
    arr[i]=a;
   }
   for (int i = 0; i < n; i++)
   {
    int mintemp = -100000;
     int finaltemp; 
     for (int j = 0; j < i+k; j++)
     {  
        if(j==0){
         finaltemp = max(mintemp , arr[j]);
        }
        else{
         int temp = max(finaltemp , arr[j]);
         finaltemp = temp;
        }
       
     }
     if(n-i>=k){
      cout<<finaltemp;
     
     }
      if(i=n-1){
        cout<<endl;
      }
     
     
     

   }
   
   


}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}