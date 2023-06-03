// Time Limit: 2 sec / Memory Limit: 1024 MB

// Score : 
// 100 points

// Problem Statement
// There are 
// N stones, numbered 
// 1,2,…,N. For each 
// i (
// 1≤i≤N), the height of Stone 
// i is 
// h 
// i
// ​
//  .

// There is a frog who is initially on Stone 
// 1. He will repeat the following action some number of times to reach Stone 
// N:

// If the frog is currently on Stone 
// i, jump to Stone 
// i+1 or Stone 
// i+2. Here, a cost of 
// ∣h 
// i
// ​
//  −h 
// j
// ​
//  ∣ is incurred, where 
// j is the stone to land on.
// Find the minimum possible total cost incurred before the frog reaches Stone 
// N.

// Constraints
// All values in input are integers.
// 2≤N≤10 
// 5
 
// 1≤h 
// i
// ​
//  ≤10 
// 4
 



#include <bits/stdc++.h>
using namespace std;
#define int long long
int dp[10010];
int h[10010];
int n;



int rec(int i){
    if (i==n)
    {
        return 0;
    }
    else if (dp[i] != -1)
    {
         return dp[i];
    }
    else{
        if(rec(i+1)>rec(i+2)){
            int cur=rec(i+2)+abs(h[i]-h[i+2]);
             dp[i]=cur;
             return cur;
        }
        else
        {
            int cur=rec(i+1)+abs(h[i]-h[i+1]);
             dp[i]=cur;
             return cur;
        }
     
       
    }
    
}


void solve(){
//    int n;
   cin>>n;
   memset(dp,-1,sizeof(dp));
   for (int i = 0; i < n; i++)
   {
         cin>>h[i];
   }
   int sum = rec(0);
   cout<<sum<<endl;
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t; cin>>t; while(t--)
    solve();
}