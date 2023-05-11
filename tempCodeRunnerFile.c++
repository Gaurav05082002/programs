#include <bits/stdc++.h>
using namespace std;
#define long long int
void solve()
{
    int n;
    cin>>n;
    set<int> mySet;
    for (int i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {

            mySet.insert(i);
            if (n / i != i)
            {
                mySet.insert(n / i);
            }

           
        }
    }

    for (const auto &element : mySet)
    {
        cout << element << " ";
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