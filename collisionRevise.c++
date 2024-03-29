// Description

// There are N balls on the X-axis and M balls on the Y-axis. At the time, t=0, each ball on X-axis is thrown parallel to the Y-axis in the positive Y direction. Similarly, each ball on Y-axis is thrown parallel to the X-axis in the positive X direction. At any time, if two balls collide, they disappear. A collision can only happen between the ball thrown from X-axis and the ball thrown from Y-axis. No two balls from X-axis or Y-axis can collide. A ball can take part in at max one collision. You have to find the total number of collisions. 


// Input Format

// The first line of the input contains one integer T - the number of test cases. Then T test cases follow.
// The first line of each test case contains two space-separated integers N and M - the number of balls on the X-axis and Y-axis respectively.
// For each test case, N lines follow. The i-th of the line contains two space-separated integers Xi and Ui, the position and speed of the i-th ball respectively.
// For each test case, M lines follow. The i-th of the line contains two space-separated integers Yi and Vi, the position and speed of the i-th ball respectively.


// Output Format

// For each test case, print the number of collisions on a separate line.


// Constraints

// 1≤ T ≤ 100
// 1≤ N, M ≤ 105
// 1≤ Xi, Ui, Yi, Vi ≤ 109

#include <bits/stdc++.h>
#define int long long 
using namespace std;
void solve()
{
   int n,m;
    cin>>n>>m;
    map<int,int>p;
    int cnt=0;
    for(int i=0; i<n; i++){
        int x,u;
        cin>>x>>u;
        p[x*u]++;
   }
    for(int i=0; i<m; i++){
        int y,v;
        cin>>y>>v;
        if(p[y*v]>0){
            cnt++;
           p[y*v]--;}
        
   }
    cout<<cnt<<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}