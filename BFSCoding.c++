// counting distnce from S TO E in given graph 

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
    cout<<"inside bfs"<<endl;
    cout<<"pair st=> "<<"{"<<st.F<<","<<st.S<<"}"<<endl;
    // start to start dis =0
    queue<ii> q;
    q.push(st);
    cout<<"queue"<<endl;
    while (!q.empty())
    {    cout<<"inside while loop q in not empty"<<endl;
        ii cur = q.front();
        cout<<"cur"<<cur.F<<","<<cur.S<<endl;
        q.pop();
        cout<<"q after pop"<<endl;
        int curd = dist[cur.F][cur.S];
        cout<<"curd="<<curd<<endl;
        //curd is shortest path to cuureent node 
        // creating 4 neighbour where movwmwnt is allowed
        for (int k = 0; k < 4; k++)
        {   
            // if next postion is not valid then continue to next option 
            if(!inside(cur.F+dx[k],cur.S+dy[k])) continue;
        
            ii neigh = {cur.F + dx[k], cur.S + dy[k]};
            cout<<"checking neig"<<neigh.F<<","<<neigh.S<<endl;
        
            // curd+1 since we have moved one more cell 
            // if (dist[neigh.F][neigh.S] == 1e9) this line can also be corect
            if (dist[neigh.F][neigh.S] > curd+1) //relaxing > first time it is visited it is visited by shortest path
            {    //not visited
                  cout<<"dist[neigh.F][neigh.S]"<<dist[neigh.F][neigh.S]<<">"<<"curd+1"<<curd+1<<endl;
                   dist[neigh.F][neigh.S] = curd+1;
                   q.push(neigh);
                   cout<<"q after pushing neigh"<<endl;
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
        bfs(st);
        cout << dist[en.F][en.S] << endl;
        // dist will  have distance of all point from  st so we are printing distnce of starting to ending point
    }

    return 0;
}