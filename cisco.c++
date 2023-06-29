#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int check(int x)
    {
        if (arr[x] < X)
            return 0;
        else
            return 1;
    }
    //    finding 1st 1 in sorted 000111
    int ans = -1;
    int lo = 0;
    int hi = n - 1;
    while (lo <= hi)
    {
        int mid = lo + hi / 2 ;
        if (check(mid) != 1)
        {
            lo = mid + 1;
        }
        else
        {
            ans = mid;
            hi = mid - 1;
        }
    }
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