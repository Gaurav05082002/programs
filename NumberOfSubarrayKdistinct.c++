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
    int distinct = 0;
    int head = -1;
    int tail = 0;
    ll ans = 0;

    while (tail < n) {
        while (head + 1 < n && ((freq[arr[head + 1]] > 0 && distinct <= k) || (freq[arr[head + 1]] == 0 && distinct < k))) {
            head++;
            if (freq[arr[head]] == 0) {
                distinct++;
            }
            freq[arr[head]]++;
        }
        
        ans += head - tail + 1;
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
