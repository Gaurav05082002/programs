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


#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;
	cin>>n;
	vector<int> v1,v2;
	v1.resize(n);
	v2.resize(n);
	for(int i=0;i<n;i++){
		cin>>v1[i];
	}
	sort(v1.begin(),v1.end());
	for(int i=0;i<n;i++){
		cin>>v2[i];
	}
	sort(v2.begin(),v2.end());
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=abs(v1[i]-v2[i]);
	}
	cout<<sum<<endl;
   
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    // string s;
    // getline(cin,s);
    for(int i=0;i<t;i++){
        solve();
    }
  
}