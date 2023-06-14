// if we push the box will stop at wall or boundry how many min times it need to e pushed to go from start ti end position 


#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define MP make_pair
int n,m;
vector<string> arr;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
using state = pair<int,int>;
int dist[1010][1010];
bool check(int x ,int y){
    if(x<0||x>=n||y<0||y>=m||arr[x][y]=="#"||dist[x][y]!=1e9) return 0;
    return 1;
}
// which cell i will reach if i am this direction in dp
pair<int,int> dp[1010][1010][4]
pair<int,int> rec(int i,int j, int dir){
    if(dp[i][j][dir != MP(-1,-1)]) return dp[i][j][dir];
    int x=i+dx[dir];
    int y=j+dx[dir];
    if(check(x,y)){
        return dp[i][j][dir]=MP(i,j);
    }else{
        return dp[i][j][dir] = rec(x,y,dir);
    }
}
void bfs(state st){
    for (int i = 0; i < n; i++)
    {
         for (int j = 0; j < m; j++)
         {
              dist[i][j]=1e9;
         }
         
    }
    dist[st.F][st.S]=0;
    queue<state>q;
    q.push(st);
    while(!q.empty){
        state cur = q.front();
        q.pop();
        int dcur = dist[cur.F][cur.S];
        for(int k=0; k<4; k++){
           state v = rec(cur.F,cur.S,k);
           if(check(v.F,v.S)&&dist[v.F][v.S]>dcur+1){
                dist[v.F][v.S] = dcur+1;
                q.push(v);
           }
        }
    }
    
}
void solve()
{
      cin>>n>>m;
      arr.resize(n);
      for (int i = 0; i < n; i++)
      {
           cin>>arr[i];
      }
      for (int i = 0; i < n; i++)
      {
          for (int j = 0; j < m; j++)
          {
              dp[i][j][0]=dp[i][j][1]=dp[i][j][2]=dp[i][j][3]= MP(-1,-1);
          }
          
      }
      
      state st;
      cin>>st.F>>st.S;
      bfs(st);
      state en;
      cin>>en.F>>en.S;
      cout<<dist[en.F][en.S]<<endl;
      
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}