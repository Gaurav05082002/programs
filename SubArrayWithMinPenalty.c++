#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    map<int, int> freq;
    ll distinct = 0;
    int head = -1;
    int tail = 0;
    ll ans = 100100;


    while (tail < n-k+1) {
        while (head + 1 < n && head-tail+1 < k) {
            head++;
            if (freq[arr[head]] == 0) {
                distinct++;
            }
            freq[arr[head]]++;
        }
        // cout<<"distinct"<<distinct<<endl;
        // cout<<"tailI"<<tail<<endl;
        // cout<<"headI"<<head<<endl;
        // cout<<endl;
        
        
        ans = min(ans,distinct);
        if (head >= tail) {
            freq[arr[tail]]--;
            if (freq[arr[tail]] == 0) {
                distinct--;
            }
            tail++;
        } else {
            tail++;
            head = tail - 1;
           
        }
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
