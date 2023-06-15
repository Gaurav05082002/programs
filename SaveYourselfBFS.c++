// Description

// You and some monsters are in a matrix. When taking a step to some direction in the matrix, each monster may simultaneously take one as well. Your goal is to reach one of the boundary squares without ever sharing a square with a monster.
// Your task is to find out if your goal is possible, and if it is, print the shortest length of the path that you can follow. Your plan has to work in any situation; even if the monsters know your path beforehand.


// Input Format

// The first input line has two integers n and m: the height and width of the matrix.
// After this, there are n lines of m characters describing the matrix. Each character is ‘.’ (floor), ‘#’ (wall), ‘A’ (start), or ‘M’ (monster). There is exactly one ‘A’ in the input.


// Output Format

// First, print "YES" if your goal is possible, and "NO" otherwise.
// If your goal is possible, also print the length of the shortest path that you'll follow.

#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
vector<string> g;
pair<int,int> l;
pair<int,int> z;
pair<int,int> st;
int solnx =0;
int solny =0;
int dis[1010][1010];
int vis[1010][1010];

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int n, m;
bool check(int i, int j) {
    if (i > n - 1 || j > m - 1 || i < 0 || j < 0 || g[i][j] == '#' || g[i][j] == 'M') return false;
    else if ( g[i - 1][j] == 'M' || g[i][j + 1] == 'M' || g[i + 1][j] == 'M' || g[i][j - 1] == 'M') {
        return false;
    }
    else return true;
}

int bfs(int x, int y) {
    
    if (x == 0 || x == n - 1) {
                    for (int i = 0; i < m; i++) {
                        if (y == i) {
                            solnx = 1002;
                            solny = 1002;
                            return 1;
                        }
                    }
                }
    if (y == 0 || y == m - 1) {
                    for (int i = 0; i < n; i++) {
                        if (x == i) {
                            solnx = 1002;
                            solny = 1002;
                            return 1;
                        }
                    }
                }
    
    
    queue<pair<int,int>> q;
    q.push({x, y});
    vis[x][y]=1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            dis[i][j] = 1e9;
        }
    }

    dis[x][y] = 0;

    while (!q.empty()) {
        z = q.front();
        q.pop();

        for (int k = 0; k < 4; k++) {
            if (!check(z.F + dx[k], z.S + dy[k]) || vis[z.F + dx[k]][z.S + dy[k]]) {
                continue;
            }
            else {
                if (z.F + dx[k] == 0 || z.F + dx[k] == n - 1) {
                    for (int i = 0; i < m; i++) {
                        if (z.S + dy[k] == i) {
                            solnx = z.F;
                            solny = z.S;
                            return 1;
                        }
                    }
                }
                if (z.S + dy[k] == 0 || z.S + dy[k] == m - 1) {
                    for (int i = 0; i < n; i++) {
                        if (z.F + dx[k] == i) {
                            solnx = z.F;
                            solny = z.S;
                            return 1;
                        }
                    }
                }
                if (dis[z.F + dx[k]][z.S + dy[k]] > dis[z.F][z.S] + 1) {
                    dis[z.F + dx[k]][z.S + dy[k]] = dis[z.F][z.S] + 1;
                    q.push({z.F + dx[k], z.S + dy[k]});
                    vis[z.F + dx[k]][z.S + dy[k]]=1;
                }
            }
        }
    }

    return 0;
}

void solve() {
    cin >> n >> m;
    g.resize(n);
    dis[1002][1002]=-1;
    for (int i = 0; i < n; i++) {
        cin >> g[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (g[i][j] == 'A') {
                l.F = i;
                l.S = j;
            }
        }
    }

    int ans = bfs(l.F, l.S);

    if (ans == 1) {
        cout << "YES" << endl;
        cout << dis[solnx][solny] + 1 << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();

    return 0;
}


////

    // MORE OPTIMIZED CODE 





    #include <bits/stdc++.h>
using namespace std;
#define int long long

int n,m;
char grid[1000][1000];
int dist_person[1000][1000];
int dist_monster[1000][1000];
int mat[1000][1000];
vector<pair<int,int>> monsters;

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

bool isValid(int row, int col){
  if(row>=0 && row<n && col>=0 && col<m && mat[row][col]==1){
    return true;
  }
  return false;
}

void bfs_person(pair<int,int> st){
  queue<pair<int,int>> q;
  q.push(st);
  dist_person[st.first][st.second]=0;
  while(!q.empty()){
    pair<int,int> cur = q.front();
    q.pop();
    for(int i=0;i<4;i++){
      int x1 = cur.first+dx[i];
      int x2 = cur.second+dy[i];
      if(isValid(x1,x2) && dist_person[x1][x2]>dist_person[cur.first][cur.second]+1){
        dist_person[x1][x2]=dist_person[cur.first][cur.second]+1;
        q.push({x1,x2});
      }
    }
  }
}

void bfs_monster(){
  queue<pair<int,int>>q;
  for(auto x:monsters){
    q.push(x);
    dist_monster[x.first][x.second]=0;
  }
  while(!q.empty()){
    pair<int,int> curr = q.front();
    q.pop();
    for(int i=0;i<4;i++){
      int x1 = curr.first + dx[i];
      int x2 = curr.second + dy[i];
      if(isValid(x1,x2) && dist_monster[x1][x2]>dist_monster[curr.first][curr.second]+1){
        dist_monster[x1][x2]=dist_monster[curr.first][curr.second]+1;
        q.push({x1,x2});
      }
    }
  }
}

void solve(){
  cin>>n>>m;
  pair<int,int> st;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>grid[i][j];
      dist_person[i][j]=1e9;
      dist_monster[i][j]=1e9;
      if(grid[i][j]=='.'){
        mat[i][j]=1;
      }
      else if(grid[i][j]=='A'){
        st={i,j};
        mat[i][j]=1;
      }
      else if(grid[i][j]=='M'){
        monsters.push_back({i,j});
      }
    }
  }
  bfs_person(st);
  bfs_monster();
  bool flag = false;
  int minm = 1e9;
  for(int i=0;i<n;i++){
    if(i==0 || i==n-1){
      for(int j=0;j<m;j++){
        if(mat[i][j]==1){
          if(dist_monster[i][j]>dist_person[i][j]){
            minm = min(minm, dist_person[i][j]);
            flag=true;
          }
        }
      }
    }
    else{
      if(dist_monster[i][0]>dist_person[i][0]){
        minm = min(minm, dist_person[i][0]);
        flag=true;
      }
      if(dist_person[i][m-1]<dist_monster[i][m-1]){
        minm = min(minm, dist_person[i][m-1]);
        flag=true;
      }
    }
  }
  if(!flag){
    cout<<"NO"<<endl;
  }else{
    cout<<"YES"<<endl;
    cout<<minm<<endl;
  }
}

signed main()
{
  ios_base::sync_with_stdio();
  cin.tie(0); cout.tie(0);
  // int t; 
  // cin>>t;
  // while(t--){
    solve();
  // }
}