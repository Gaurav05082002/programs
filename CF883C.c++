#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<pair<int, int>, int>& a, const pair<pair<int, int>, int>& b) {
    if (a.first.first != b.first.first) {
        return a.first.first > b.first.first;  // Sort by points in descending order
    } else if (a.first.second != b.first.second) {
        return a.first.second < b.first.second;  // Sort by penalty in descending order
    } else {
        return a.second < b.second;  // Sort by i in ascending order
    }
}

void solve() {
    int n, m, h;
    cin >> n >> m >> h;

    vector<vector<int>> q(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> q[i][j];
        }
    }

    vector<pair<pair<int, int>, int>> p;

    for (int i = 0; i < n; i++) {
        int t = h;
        int points = 0;
        int penalty = 0;
        sort(q[i].begin(), q[i].end());

        for (int j = 0; j < m; j++) {
            if (t - q[i][j] >= 0) {
                t -= q[i][j];
                points++;
                penalty = penalty + penalty+ q[i][j];
            } else {
                break;
            }
        }

        p.push_back({{points, penalty}, i});
    }

    sort(p.begin(), p.end(), compare);
//     for (int i = 0; i < p.size(); i++) {
//     cout << "(" << p[i].first.first << ", " << p[i].first.second << ", " << p[i].second << ")" << endl;
// }

    int index = -1;
    for (int i = 0; i < p.size(); i++) {
        if (p[i].second == 0) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        cout << index+1 << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}
