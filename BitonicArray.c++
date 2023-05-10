
// finding the position of max element in bitonic array vis binary search 


#include <bits/stdc++.h>
using namespace std;
#define long long int
int arr[100100];
int check(int x)
{
    if (arr[x] > arr[x + 1])
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void solve()
{
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (q--)
    {
        int k;
        cin >> k;

        int lo = 0;
        int hi = n - 1;
        int ans = -1;
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
        cout << ans + 1 << endl;
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