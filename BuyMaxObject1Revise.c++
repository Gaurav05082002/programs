// Description

// There are N objects, and each object has some price. The price of ith object is Ai.
// You have total money M, and you want to buy as many objects as possible.
// Find the maximum objects that you can buy?


// Input Format

// The first line contains T, the number of test cases.
// The first line of each test case contains N, the number of objects, and M, the money you have.
// The second line of each test case contains N space-separated integers A1, A2, ..., AN.


// Output Format

// For each test case, print a single number representing the maximum objects that you can buy.


#include <bits/stdc++.h>
using namespace std;
void solve()
{
   int n, m;
    cin>>n>>m;
    int a[n];
    int count=0;
     int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    for(int i=0; i<n; i++)
    {
      sum+=a[i];
        if(sum>m)
            break;
        else
            count++;
        
    }
    cout<<count<<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}