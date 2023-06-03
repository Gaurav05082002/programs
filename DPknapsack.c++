// link > https://atcoder.jp/contests/dp/tasks/dp_d 


// Problem Statement
// There are 
// N items, numbered 
// 1,2,…,N. For each 
// i (
// 1≤i≤N), Item 
// i has a weight of 
// w 
// i
// ​
//   and a value of 
// v 
// i
// ​
//  .

// Taro has decided to choose some of the 
// N items and carry them home in a knapsack. The capacity of the knapsack is 
// W, which means that the sum of the weights of items taken must be at most 
// W.

// Find the maximum possible sum of the values of items that Taro takes home.

// Constraints
// All values in input are integers.
// 1≤N≤100
// 1≤W≤10 
// 5
 
// 1≤w 
// i
// ​
//  ≤W
// 1≤v 
// i
// ​
//  ≤10 
// 9



#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,wl;
int w[101];
int v[101];
int dp[10001][10001];

int rec( int i , int x){
    int ans=0;
    int ans1=0;
    int ans2=0;
    if (i==n)
    {
        return 0;
    }
    if(dp[i][x]!=-1){
        return dp[i][x];
    }
    else{
        
          ans = rec(i+1 ,x);
          if(x+w[i]<=wl){
              ans = max(ans,(rec(i+1,x+w[i])+v[i]));
          }
         dp[i][x]=ans;
    }
  
    return ans;
    
}
void solve()
{
    cin>>n>>wl;
    for (int i = 0; i < n; i++)
    {
        cin>>w[i]>>v[i];
    }
    memset(dp,-1,sizeof(dp));
    cout<<rec(0,0)<<endl;
    
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}
