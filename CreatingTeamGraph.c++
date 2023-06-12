#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100001;
bool vis[MAXN];
int team[MAXN];
vector<int> g[MAXN];

bool dfs(int vertex, int par, int currTeam) {
    vis[vertex] = true;
    team[vertex] = currTeam;

    for (int child : g[vertex]) {
        if (child == par)
            continue;

        if (vis[child]) {
            if (team[child] == currTeam) {
                return true; // Loop or round trip detected
            }
        } else {
            if (dfs(child, vertex, 3 - currTeam)) {
                return true;
            }
        }
    }

    return false;
}

void solve() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            if (dfs(i, -1, 1)) {
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
