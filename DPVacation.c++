// https://atcoder.jp/contests/dp/tasks/dp_c  link of question 

// Problem Statement
// Taro's summer vacation starts tomorrow, and he has decided to make plans for it now.

// The vacation consists of 
// N days. For each 
// i (
// 1≤i≤N), Taro will choose one of the following activities and do it on the 
// i-th day:

// A: Swim in the sea. Gain 
// a 
// i
// ​
//   points of happiness.
// B: Catch bugs in the mountains. Gain 
// b 
// i
// ​
//   points of happiness.
// C: Do homework at home. Gain 
// c 
// i
// ​
//   points of happiness.
// As Taro gets bored easily, he cannot do the same activities for two or more consecutive days.

// Find the maximum possible total points of happiness that Taro gains.

// Constraints
// All values in input are integers.
// 1≤N≤10 
// 5
 
// 1≤a 
// i
// ​
//  ,b 
// i
// ​
//  ,c 
// i
// ​
//  ≤10 
// 4

#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[1001];
int b[1001];
int c[1001];
int n;
int dp[10001][4];

int rec(int i, int z)
{
    int ans = 0;
    int ans1 = 0;
    int ans2 = 0;
    int ans3 = 0;
    if (i == n - 1)
    {
        int mat = max({a[i], b[i], c[i]});
        return mat;
    }
    if (dp[i][z] != -1)
    {
        return dp[i][z];
    }
    else
    {
        if (z == 1)
        {
            if (b[i] >= c[i])
            {
                ans1 = rec(i + 1, 2) + b[i];
            }
            else if (c[i] > b[i])
            {
                ans1 = rec(i + 1, 3) + c[i];
            }
        }
        else if (z == 2)
        {
            if (a[i] >= c[i])
            {
                ans2 = rec(i + 1, 1) + a[i];
            }
            else if (c[i] > a[i])
            {
                ans2 = rec(i + 1, 3) + c[i];
            }
        }
        else if (z == 3)
        {
            if (a[i] >= b[i])
            {
                ans3 = rec(i + 1, 1) + a[i];
            }
            else if (b[i] > a[i])
            {
                ans3 = rec(i + 1, 2) + b[i];
            }
        }
    }
    // cout<<"ans1=="<<ans1<<endl;
    // cout<<"ans2=="<<ans2<<endl;
    // cout<<"ans3=="<<ans3<<endl;
    ans = max({ans1, ans2, ans3});
    dp[i][z] = ans;
    return ans;
}

// our level is row

void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }
    memset(dp, -1, sizeof(dp));
    if (a[0] > b[0] && a[0] > c[0])
    {
        cout << rec(0, 1) << endl;
    }
    else if (b[0] > a[0] && b[0] > a[0])
    {
        cout << rec(0, 2) << endl;
    }
    else if (c[0] > a[0] && c[0] > a[0])
    {
        cout << rec(0, 3) << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}
