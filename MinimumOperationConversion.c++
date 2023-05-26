// Description

// You are given a number X, you can perform two operations:

// Double: Multiply the number on the display by 2, or;
// Decrement: Subtract 1 from the number on the display.
// Return the minimum number of operations needed to convert number X to Y.


// Input Format

// The first line contains an integer T (number of test cases), 1 ≤ T ≤ 10^6.

// The next T lines contain 2 space-separated integers X, Y where 1 ≤ X,Y ≤ 10^18.


// Output Format

// For each test case print the minimum number of operations required in a new line.


// Constraints

// 1 ≤ T ≤ 10^6.
// 1 ≤ X,Y ≤ 10^18



#include <bits/stdc++.h>
using namespace std;
using lli = long long; 
void solve()
{ 
    lli x,y;
    cin>>x>>y;
    lli cnt =0;
    if(x>=y){
        cnt = x-y;
    }else{
        if(y%2==0){
            y=y/2;
            cnt++;
        }else{
            y=y+1;
            y=y/2;
            cnt = cnt+2;
        }

        while(x<y){
            if(y%2 == 0){
                y=y/2;
                cnt++;
            }else{
            y=y+1;
            y=y/2;
            cnt = cnt+2;
           }
        
        }

        cnt=cnt+x-y;
    }
    cout<<cnt<<endl;
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}