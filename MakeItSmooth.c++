// Description

// You are given an array A of size N. In one operation you can select any non-decreasing subarray and increment all the elements in the subarray by one. Your goal is to make the whole array non-decreasing in minimum operations.

 


// Input Format

// First line of input contains T, number of test cases.

// First line of each test case contains n.

// Next line contains n integers of array A.

 


// Output Format

// For each test case print a single integer in a new line: Minimum number of operations.


// Constraints

// T ≤ 10

// 1 ≤ n ≤ 105

// 0 ≤ Ai ≤ 109


// Sample Input 1

// 2

// 4

// 5 3 2 5

// 3

// 1 1 1


// Sample Output 1

// 3

// 0

// approach >Traverse through the given array and if you get A[i-1] ≥ A[i], add (A[i-1] - A[i]) to the answer. The value, (A[i-1] - A[i]) would be added to all the elements in the non-decreasing subarray starting from A[i].

// Time Complexity per test case: O(N)


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, t;

    cin >> t;
    while (t--)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++) cin>>arr[i];
        long long sum=0;
        for(i=1;i<n;i++)
        {
            if(arr[i]<arr[i-1])
            {
                sum+=arr[i-1]-arr[i];
            }
        }
        cout<<sum<<"\n";
    }

    return 0;
}