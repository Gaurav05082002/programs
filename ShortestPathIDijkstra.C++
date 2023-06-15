#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> g[100001];
int n,m;
#define F first;
#define S second;
vector <int> vis(100001 ,0);
vector <int> dist(100001 ,1e9);
void dijkstra(int src){

     set<pair<int ,int>> st;
    //  we need pq in respective to weight hence in pair of set st first value of pair is weight and second value is node 
     st.insert({0,src});
     dist[src]=0;
     while(st.size()>0){
        auto node = *st.begin();
        int v = node.S;
        int v_dist = node.F;
        st.erase(st.begin());
       
       if(vis[v]) continue;
       vis[v]=1;
       for(auto child: g[v]){
            int child_v = child.F;
            int wt = child.S;
            if(dist[child_v]> dist[v] + wt){
                dist[child_v]=dist[v] + wt;
                st.insert({dist[child_v] , child_v});
            }
       }

     }
}
void solve()
{ cin>>n>>m;
g.resize(m+1);
for (int i = 0; i < m; i++)
{
    int x,y,w;
    cin>>x>>y>>w;
    g[x].push_back({y,w});
}
dijkstra(1);

for (int i = 1; i < n; i++)
{
    cout<<dist[i]<<" ";
}
cout<<endl;



   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}


///
#include <bits/stdc++.h>
using namespace std;
#define int long long

int n,m;
vector<vector<pair<int,int>>> g;
signed main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
    cin>>n>>m;
    g.resize(n+1);
    while(m--){
        int a,b,c;
        cin>>a>>b>>c;
        g[a].push_back({b,c});
    }
    int dist[n+1];
    int vis[n+1];
    for(int i=1;i<=n;i++){
        dist[i]=1e18;
        vis[i]=false;
    }
    priority_queue<pair<int,int>> pq;
    dist[1]=0;
    pq.push({0,1});
    while(!pq.empty()){
        int x=-pq.top().first;
        int y=pq.top().second;
        pq.pop();
        if(vis[y])continue;
        vis[y]=true;
        for(auto it: g[y]){
            int w=it.first;
            int z=it.second;
            if(dist[w]>dist[y]+z){
                dist[w]=dist[y]+z;
                pq.push({-dist[w],w});
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<dist[i]<<" ";
    }cout<<endl;
}