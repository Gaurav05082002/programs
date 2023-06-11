#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[1001][1001];
int dp[1001][1001];
int rec(int i ,int j){
    int ans1=0;
    int ans2=0;
    int ans =0;
    if(i==n-1 && j==m-1){
        return a[i][j];
    }
    if(i>n-1 || j>m-1){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    ans1 = a[i][j]+rec(i+1 ,j);
    ans2 = a[i][j]+rec(i,j+1);
    ans=max(ans1,ans2);
    return dp[i][j]= ans;
}

void solve()
{
   cin>>n>>m;
   for (int i = 0; i < n; i++)
   {
       for (int j = 0; j < m; j++)
       {
           cin>>a[i][j];
       }
       
   }
   memset(dp,-1,sizeof(dp));
   cout<<rec(0,0)<<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}