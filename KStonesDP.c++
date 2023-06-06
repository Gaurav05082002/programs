// Problem Statement
// There is a set 
// A={a 
// 1
// ​
//  ,a 
// 2
// ​
//  ,…,a 
// N
// ​
//  } consisting of 
// N positive integers. Taro and Jiro will play the following game against each other.

// Initially, we have a pile consisting of 
// K stones. The two players perform the following operation alternately, starting from Taro:

// Choose an element 
// x in 
// A, and remove exactly 
// x stones from the pile.
// A player loses when he becomes unable to play. Assuming that both players play optimally, determine the winner.

#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,k;
int a[10010];
int dp[10001];
int moves[100010];
int rec( int x){
   
   if(x==0){
    return 0;
   }
   if(dp[x]!=-1){
    return dp[x];
   }
   int ans =0;
   for (int j = 0; j < n; j++)
   {
      if(v<=x && rec(x-v)==0){
        ans=1;
        break;
      }
   }
   return dp[x] = ans;
   

}

void solve()
{
cin>>n>>k;
for (int i = 0; i < n; i++)
{
    cin>>moves[i];
}
memset(dp,-1 , sizeof(dp));
cout<<rec(k);


    
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}
