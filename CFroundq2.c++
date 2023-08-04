#include <bits/stdc++.h>
using namespace std;
void solve()
{
   int n; 
   cin>>n;
   int a[n];
   for (int i = 0; i < n; i++)
   {
       cin>>a[i];
   }
   int head=-1;
   int tail = 0;
   int ans;
   int cnt=0;
   while(tail<n){
    if(head+1==0){
       ans=a[0];
    }
    
    while(head+1<n && ((ans & a[head+1]) == 0)){
       
       ans = (ans & a[head+1]);
       head++;
        
    }
    if(tail<head){

    }
   }
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}