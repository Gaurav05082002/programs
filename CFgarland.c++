#include <bits/stdc++.h>
using namespace std;

void solve()
{
    map<int, int> fre;

    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        fre[x]++;
    }

    if (fre.size() == 4)
    {

        cout << 4 << endl;
    }
    else if (fre.size() == 2)
    {
        map<int, int>::iterator d;
        for (d = fre.begin(); d != fre.end(); d++)
        {
            if (d->second > 2)
            {
                cout << 6 << endl;
                break;
            }
            else if (d->second == 2)
            {
                cout << 4 << endl;
                break;
            }
        }
    }
    else if (fre.size() == 3)
    {
        cout << 4 << endl;
    }
    else if (fre.size() == 1)
    {
        cout << -1 << endl;
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