// pinting shortest path from S TO E in given graph

#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
using ii = pair<int, int>;

/*
6 6
s.#...
......
####.#
E.##.#
..#..#
#....#


*/

int n, m;
vector<string> arr;
int dist[1010][1010];
ii par[1010][1010];
// so that we acn store from which node we are coming to particular node
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
// since we are doing bfs from starting point dist will start distance of every node from starting point

// we can go to x,y+1  x-1,y  x,y-1  x+1,y
// dx[]={1,0,-1,0}
// dy[]={0,1,0,-1}
// this can generate direction

bool inside(int x, int y)
{
    // if in reachable portion
    if (x < 0 || x >= n || y < 0 || y >= m || arr[x][y] == '#')
    {
        return 0;
    }
    else
        return 1;
}
void bfs(ii st)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            dist[i][j] = 1e9;
            //  all are at infinte distance
        }
    }
    dist[st.F][st.S] = 0;

    // start to start dis =0
    queue<ii> q;
    q.push(st);

    while (!q.empty())
    {
        ii cur = q.front();

        q.pop();

        int curd = dist[cur.F][cur.S];

        // curd is shortest path to cuureent node
        //  creating 4 neighbour where movwmwnt is allowed
        for (int k = 0; k < 4; k++)
        {
            // if next postion is not valid then continue to next option
            if (!inside(cur.F + dx[k], cur.S + dy[k]))
                continue;

            ii neigh = {cur.F + dx[k], cur.S + dy[k]};

            // curd+1 since we have moved one more cell
            // if (dist[neigh.F][neigh.S] == 1e9) this line can also be corect
            if (dist[neigh.F][neigh.S] > curd + 1) // relaxing > first time it is visited it is visited by shortest path
            {                                      // not visited
                dist[neigh.F][neigh.S] = curd + 1;
                par[neigh.F][neigh.S] = cur;
                q.push(neigh);
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    arr.resize(n);
    ii st, en;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 'S')
            {
                st = {i, j};
            }
            else if (arr[i][j] == 'E')
            {
                en = {i, j};
            }
        }
    }
    bfs(st);
    cout << dist[en.F][en.S] << endl;
    // dist will  have distance of all point from  st so we are printing distnce of starting to ending point
  cout<<"distace array "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << dist[i][j] << "\t";
        }

        cout << endl;
    }

    ii temp = en;
    vector<ii> path;
    while (temp != st)
    {
        path.push_back(temp);
        temp = par[temp.F][temp.S];
    }
    path.push_back(st);
    reverse(path.begin(), path.end());
    for (auto v : path)
    {
        cout << v.F << " " << v.S << endl;
    }

    return 0;
}