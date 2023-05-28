// Description

// There are 
// n
//  friends in a 2D plane who want to meet at some common point. Each of their position is given to you as 
// x
//  & 
// y
//  coordinates.

// The distance a person covers to go from position 
// (
// x
// 1
// ,
// y
// 1
// )
//  to 
// (
// x
// 2
// ,
// y
// 2
// )
//  is the Manhattan distance, i.e., 
// |
// x
// 1
// −
// x
// 2
// |
// +
// |
// y
// 1
// −
// y
// 2
// |
// .

// They choose the meeting point such that the sum of distances covered by each of them to reach it is minimum. Find this minimum sum of distances.


// Input Format

// The first line of input contains 
// T
// , the number of test cases.
// The first line of each test case contains 
// n
// .
// Each of the next 
// n
//  lines contains two integers 
// (
// x
// ,
// y
// )
// .


// Output Format

// For each test case output one integer: The minimum sum of distances covered by them.


// Constraints

// 1
// ≤
// T
// ≤
// 10

// 1
// ≤
// n
// ≤
// 10
// 5

// 0
// ≤
// x
// ,
// y
// ≤
// 10
// 6

// Sample Input 1

// 1
// 3
// 0 4
// 4 0
// 2 2

// Sample Output 1

// 8



#include <bits/stdc++.h>
using namespace std;
void solve()
{   int n;
    cin>>n;
//    vector<pair<int,int>> points;
   int x[n];
   int y[n];

   
   for (int i = 0; i < n; i++)
   {
       int a;
       int b;
       cin>>a>>b;
       x[i]=a;
       y[i]=b;
   }
   sort(x,x+n);
   sort(y,y+n);
   int medianvaluex;
   int medianvaluey;
// int medianpoint=0;
   if((n-1)%2!=0){
        medianvaluex = (x[(n-1)/2]+x[((n-1)/2)+1])/2;
        medianvaluey = (y[(n-1)/2]+y[((n-1)/2)+1])/2;
        // cout<<"medianvaluex"<<medianvaluex<<endl;
        // cout<<"medianvaluey"<<medianvaluey<<endl;
   }else{
    medianvaluex = x[(n-1)/2];
    medianvaluey = y[(n-1)/2];
    // cout<<"medianvaluex"<<medianvaluex<<endl;
        // cout<<"medianvaluey"<<medianvaluey<<endl;
   }
   
   int sumx=0;
   int sumy=0;
    for (int i = 0; i < n; i++)
    {
        sumx = sumx+abs(x[i]-medianvaluex);
        sumy = sumy+abs(y[i]-medianvaluey);
    }
    
    cout<<sumx+sumy<<endl;

   
    
    
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}