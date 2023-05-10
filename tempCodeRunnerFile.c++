#include <bits/stdc++.h>
using namespace std;
#define int long long
int arr[10100];

int check(int x)
{
    if(arr[x]<arr[0]){
        return 1;
    }
    else {
        return 0;
    }
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // 00001111
    int lo = 0;
    int hi = n - 1;
    int ans = -1;

    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        // if(arr[mid] != 1){
        if (check(mid))
        {
              ans = mid;
            hi = mid - 1;
           
        }
        else
        {
           lo = mid + 1;
        }
    }

    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}