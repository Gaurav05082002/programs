// if two string are given find the length of longest commonm sub sequence 
// Problem Statement
// You are given strings 
// s and 
// t. Find one longest string that is a subsequence of both 
// s and 
// t.

// Notes
// A subsequence of a string 
// x is the string obtained by removing zero or more characters from 
// x and concatenating the remaining characters without changing the order.

// Constraints
// s and 
// t are strings consisting of lowercase English letters.
// 1≤∣s∣,∣t∣≤3000

#include <bits/stdc++.h>
using namespace std;
#define int long long
string s1,s2;
int l,m;
int dp[2002][2002];
string result;
int rec(int la , int lb ){
    int ans=0;
    int ans1=0;
    int ans2=0;
    int ans3=0;
    //base case 
    if(la==l || lb==m){
        return 0;
    }
    if(dp[la][lb]!=-1){
        return dp[la][lb];
    }

    if(s1[la]==s2[lb]){
        ans1 = rec(la+1,lb+1)+1;
        ans = ans1;
        // result.push_back(s1[la]);
    }
    else{
        ans2 = rec(la , lb+1);
        ans3= rec(la+1 , lb);
        ans = max(ans2 , ans3);
    }
 
    dp[la][lb]=ans;
    return ans;
}



void solve()
{
    cin>>s1>>s2;
    l=s1.length();
    m=s2.length();
    memset(dp,-1,sizeof(dp));
    cout<<rec(0,0)<<endl;
   

   
    int i = l, j = m;
    while (i > 0 && j > 0) {
        if (s1[i - 1] == s2[j - 1]) {
            result.push_back(s1[i - 1]);
            i--;
            j--;
        } else if (dp[i - 1][j] > dp[i][j - 1])
            i--;
        else
            j--;
    }

    reverse(result.begin(), result.end());




    cout<<result<<endl;
    

    
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}
