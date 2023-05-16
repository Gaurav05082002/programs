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
    int sum = 0;
    int head = -1;
    int tail = 0;
    ll ans = 0;

    while (tail < n) {
        while (head + 1 < n && ( sum+arr[head+1] <= k  )) {
            head++;
            sum = sum+arr[head];
        }
        
        ans += head - tail + 1;
        if (head >= tail) {
            sum = sum-arr[tail];
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
