#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
   IOS
   int t;
   cin>>t;
   while(t--) {
       int n,m;
       cin>>n>>m;
       bool a[n][m];
       int dp[n][m];

       for(int i=0; i<n; ++i){
           for(int j=0; j<m; ++j){
               dp[i][j]=0,a[i][j]=0;
               int x;
               cin>>x;
               if(i-1>=0){
                   dp[i][j]=max(dp[i][j], dp[i-1][j]);
                   if(j-1>=0)
                       dp[i][j]=max(dp[i][j], dp[i-1][j-1]);
                   if(j+1<m)
                       dp[i][j]=max(dp[i][j], dp[i-1][j+1]);
               }
               if(x>=dp[i][j])
                   a[i][j]=1;
               dp[i][j]=max(dp[i][j], x);
           }
       }
       for(int i=0; i<n; ++i){
           for(int j=0; j<m; ++j){
               cout<<a[i][j];
           }
           cout<<"\n";
       }
   }
   return 0;
}