#include <bits/stdc++.h>
using namespace std;
#define int long long
int arr[100000100];
int n, k;
int check(int x)
{
    int lastleft = 0;
    int needed = 0;
    for (int i = 0; i < n; i++)
    {
        if (lastleft >= arr[i])
        {
            lastleft -= arr[i];
        }
        else
        {
            needed++;
            lastleft = x - arr[i];
        }

        if (needed > k)
        {
            return 0;
        }
    }
    if (needed > k)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void solve()
{
    
    cin >> n >> k;
    int hi = 0;
    int lo = 0;
    int ans = -1;
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        hi = hi + arr[i];
        lo = max(lo, arr[i]);
    }
    // 00001111
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
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
    cout<<ans<<endl;
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