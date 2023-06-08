#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1000000007; // 109 + 7
int n ,m ;
int a[1001][1001];
int dp[1001][1001];
int rec(int r ,int c){

    int ans1=0;

    if(a[0][0]==0){
        return 0;
    }
    if(r==0 && c == 0){
       return 1;
        
    }
    if (dp[r][c]!=-1)
    {
        return dp[r][c];
    }
    
    if(a[r][c]==1){
        ans1 = rec(r-1 , c) + rec(r,c-1);
    }
    else{
        ans1 = 0;
    }
    return dp[r][c] = ans1%MOD;
}

void solve()
{
   cin>>n>>m;
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      { int x;
         cin>>x;
        if(x==0){
           a[i][j]=1; 
        }
        if(x==1){
            a[i][j]=0;
        }
       
      }
     
   }
   memset(dp,-1,sizeof(dp));
   cout<<rec(n-1,m-1)<<endl;

   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}