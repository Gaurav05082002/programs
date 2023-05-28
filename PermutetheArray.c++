//when you want absolute diffreence sum maximum
// Description

// There are two arrays of size n, A [a1, a2 … an] and B [b1, b2 … bn]. You can permute the elements in both the arrays any way you want.

// Your goal is to minimize the sum of the absolute differences between corresponding elements of the arrays i.e. sum of |ai-bi| for i from 1 to n.

// Find this minimum sum.


// Input Format

// First line of input contains T, number of test cases.

// First line of each test case contains n, size of the arrays.

// Second line contains n integers a1, a2 … an .

// Third line contians n integers b1, b2 … bn .

 

 


// Output Format

// For each test case print a single integer in a new line: Minimum sum of the absolute differences between corresponding elements of the arrays.


// Constraints

// T ≤ 10

// 1 ≤ n ≤ 105

// 0 ≤ |ai|,|bi| ≤ 106


// Sample Input 1

// 1

// 3

// 1 2 1

// 2 1 1


// Sample Output 1

// 0




#include <bits/stdc++.h>
#include <iostream>
#include <array>
using namespace std;
void swapArrays(int a[], int b[], int n) {
    for (int i = 0; i < n; i++) {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
void solve()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int aneg=0;
    int bneg=0;
    int sum =0;
     
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]<0){
            aneg++;
        }
        
    }
    for (int i = 0; i < n; i++)
    { 
        cin>>b[i];
        if(b[i]<0){
            aneg++;
        }
        
    }
    if(bneg>aneg){
        swapArrays(a,b,n);
    }

    int asize = sizeof(a) / sizeof(a[0]);
    int bsize = sizeof(b) / sizeof(b[0]);
    sort(a,a+asize);//a ascending
    sort(b,b+bsize,greater<int>()); // b descening
    for (int i = 0; i < bneg; i++)
    {
        sum = sum + abs(a[i]-b[i]);
    }
    int csize = aneg-bneg+1;
    int c[csize];
    for (int i = 0; i < csize; i++)
    {
        c[i]=b[bneg+i];
    }
    sort(c,c+csize);
    
    for (int i = bneg; i < aneg; i++)
    {
        sum = sum + abs(a[i]-c[i-bneg]);
    }
    for (int i = aneg; i < n; i++)
    {
        sum = sum + abs(a[i]-b[i]);
    }
    
    
     cout<<sum<<endl;
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}