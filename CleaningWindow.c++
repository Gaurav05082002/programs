// There is a building with N (numbered 1 through N from top to bottom) floors, each with M windows. All the windows need to be cleaned. For each valid i and j, the window (i,j) must be cleaned on the A(i,j)-th turn. From window(i, j), water flows to the window(i+1,j-1), window(i+1,j), and window(i+1,j+1) if exists. When a window(i,j) is cleaned, window(i+1,j-1), window(i+1,j) and window(i+1,j+1) become dirty because of dirty water after cleaning window(i,j). Water flows further down of these dirty windows making next level windows dirty, and the same things go on recursively. 

// E.g. When the window(0, 5) is getting cleaned. Then the water flows down to windows (1, 4), (1, 5) and (1, 6) making them dirty. Then the water flows from the window (1, 4) down to (2, 3), (2, 4), (2, 5), from the window (1,5) to (2, 4), (2, 5), (2, 6). And so on.

// You have to determine whether each window will be clean after the cleaning process ends.


// Input Format

// The first line of the input contains one integer T - the number of test cases. Then T test cases follow.

// The first line of each test case contains two space-separated integers N, M - the size of the building.

// Each of the next N lines contains Ai,j - the time at which window (i,j) is cleaned. At a time, only one window can be cleaned.


// Output Format

// For each test case, print N lines, each with M integers denoting whether the (i,j)-th window will be clean or not after the cleaning process ends.


#include <iostream>
#include <vector>
using namespace std;

int n, m;
int a[1001][1001];
vector<vector<int>> b;
vector<pair<int, int>> turn;

int check(int i, int j)
{
    if (i >= n || j >= m || i < 0 || j < 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void rec(int i, int j)
{
    if (check(i + 1, j - 1))
    {
        a[i + 1][j - 1] = 0;
        rec(i + 1, j - 1);
    }
    if (check(i + 1, j))
    {
        a[i + 1][j] = 0;
        rec(i + 1, j);
    }
    if (check(i + 1, j + 1))
    {
        a[i + 1][j + 1] = 0;
        rec(i + 1, j + 1);
    }
}

void solve()
{
    cin >> n >> m;

    b.resize(n);
    turn.resize(n * m);

    for (int i = 0; i < n; i++)
    {
        b[i].resize(m);
        for (int j = 0; j < m; j++)
        {
            cin >> b[i][j];
            turn[b[i][j] - 1] = make_pair(i, j);
        }
    }

    for (auto child : turn)
    {
        rec(child.first, child.second);
        a[child.first][child.second] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
