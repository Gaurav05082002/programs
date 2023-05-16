#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 100001;
ll n, k;
ll a[N];

void merge(int l, int r, int mid) {
    int l_sz = mid - l + 1;  // Added missing variable declaration
    int r_sz = r - (mid + 1) + 1;  // Added missing variable declaration
    int L[l_sz + 1];
    int R[r_sz + 1];
    for (int i = 0; i < l_sz; i++) {
        L[i] = a[i + l];
    }
    for (int i = 0; i < r_sz; i++) {  // Fixed the loop condition
        R[i] = a[i + mid + 1];  // Fixed the index calculation
    }
    L[l_sz] = R[r_sz] = INT_MAX;
    int l_i = 0;
    int r_i = 0;
    for (int i = l; i <= r; i++) {
        if (L[l_i] <= R[r_i]) {  // Changed L(l_i) to L[l_i]
            a[i] = L[l_i];
            l_i++;
        } else {
            a[i] = R[r_i];
            r_i++;  // Fixed the variable update
        }
    }
}

void mergeSort(int l, int r) {
    if (l == r) {
        return;
    }
    int mid = (l + r) / 2;  // Fixed the variable calculation
    mergeSort(l, mid);
    mergeSort(mid + 1, r);
    merge(l, r, mid);  // Added the missing argument for mid
}

signed main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    mergeSort(0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";  // Added space for better readability
    }
    cout << endl;  // Added newline after printing the sorted array
    return 0;  // Added return statement
}
