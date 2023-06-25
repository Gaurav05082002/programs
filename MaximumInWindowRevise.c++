// Description

// You have given an array A of size N and a positive integer K (≤ N). A1, A2, ..., AN are the elements of the array.
// Let Bi = max (Ai, Ai+1, ..., Ai+K-1), for 1 ≤ i ≤ N - K + 1. 
// Find Bi values for all is such that 1 ≤ i ≤ N - K + 1.


// Input Format

// The first line contains T, the number of test cases. 
// The first line of each test case contains N, the number of integers in an array A and K.
// The second line of each test case contains N space-separated integers A1, A2, ..., AN.


// Output Format

// For each test case, print array B as B1 B2 ... BN-K+1 in a new line.


// Constraints

// 1 ≤ T ≤ 100000
// 1 ≤ K ≤ N ≤ 100000
// -109 ≤ Ai ≤ 109
// Sum of N over all test cases ≤ 5 * 105.


// Sample Input 1

#include <bits/stdc++.h>
using namespace std;
vector<int> b;
void solve()
{
    int k,n;
    cin>>n>>k;
    int a[n+1];
    int b[n+1];
   
    for(int i =0; i<n ; i++){
        cin>>a[i];
     }
    int head=-1;
    int tail=0;
    int maxa=-1e9;
    int maxb=-1e9;
    int cnt = 0;
    
        while(head+1<n && tail<=n-k){
            if(a[head+1]>maxa){
                   maxb=maxa;
                   maxa=a[head+1];
                    
            }
            head++;
            cnt++;
            if(cnt==k){
                cnt=cnt-1;
             b[tail]=maxa;
                if(maxa==a[tail]){
                   maxa=maxb;
                   
                }
                 tail++;
            }
            
       }
    for(int i=0; i<n-k+1; i++){
        cout<<b[i]<<" ";
    }
      cout<<endl;
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}



// below code is better

Solution 1:

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;

signed main() {
    //freopen("IN", "r", stdin);
    //freopen("OUT", "w", stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        int A[n];

        for (int i = 0; i < n; i++)
            cin >> A[i];

        multiset<int> M;

        for (int i = 0; i < k; i++)
            M.insert(A[i]);

        for (int i = 0; i <= n - k; i++) {
            cout << *(M.rbegin()) << " ";
            M.erase(M.find(A[i]));
            if(i + k < n) M.insert(A[i + k]);
        }
        cout << "\n";
    }
    return 0;
}






// other solution
// Solution 2:

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;

void add(deque<int> &d, int x) {
    while(!d.empty() && d.back() < x)
        d.pop_back();
    d.push_back(x);
    return;
}

void rem(deque<int> &d, int x) {
    assert(!d.empty());
    if(d.front() == x) d.pop_front();
    return;
}

signed main()
{
    //freopen("IN", "r", stdin);
    //freopen("OUT", "w", stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T; cin >> T;
    while(T--) {
        int n, k; cin >> n >> k;
        int A[n];

        for(int i = 0; i < n; i++)
            cin >> A[i];

        deque<int> d;

        for(int i = 0; i < k; i++)
            add(d, A[i]);

        for(int i = 0; i <= n - k; i++) {
            cout << d.front() << " ";
            rem(d, A[i]);
            if(i + k < n) add(d, A[i + k]);
        }

        cout << "\n";
    }
    return 0;
}