#include <bits/stdc++.h>
using namespace std;
vector<string> arr;
vector<int ,int> vis;
int n,m;
// so that we acn store from which node we are coming to particular node
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
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
void dfs(int i , int j , int comp){
      // if next postion is not valid then continue to next option
            for (int k = 0; k < 4; k++)
        {
            // if next postion is not valid then continue to next option
            if (!inside(i+dx[k],j+dy[k]))
                continue;
            else{
                vis[i][j]=comp;
                
            }
          
        }
       
}
void solve()
{
   
}
signed main(){
     cin>>n>>m;
     arr.resize(n);
     for (int i = 0; i < n; i++)
     {
        cin>>arr[i];
     }
     
    // for (int i = 0; i < n; i++)
    //  {
    //     for (int j = 0; j < m; i++)
    //     {
    //     cout<<arr[i][j];
    //     }
    //     cout<<endl;
    //  }
     

    


    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t; cin>>t; while(t--)
    solve();
}