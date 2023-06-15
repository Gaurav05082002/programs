// There are n cities and m roads between them. Unfortunately, the condition of the roads is so poor that they cannot be used. Your task is to repair some of the roads so that there will be a decent route between any two cities.
// For each road, you know its reparation cost, and you should find a solution where the total cost is as small as possible.


// Input Format

// The first input line has two integers n and m: the number of cities and roads. The cities are numbered 1, 2, …, n.
// Then, there are m lines describing the roads. Each line has three integers a, b and c: there is a road between cities a and b, and its reparation cost is c. All roads are two-way roads.
// Every road is between two different cities, and there is at most one road between two cities.



#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
vector<pair<int, pair<int, int>>> g;

int n, m;
int Size[100001];
int parent[100001];

void make(int v) {
    parent[v] = v;
    Size[v] = 1;
}

int find(int v) {
    if (v == parent[v]) return v;
    return parent[v] = find(parent[v]);
}

void Union(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b) {
        if (Size[a] < Size[b]) {
            swap(a, b);
        }
        parent[b] = a;
        Size[a] += Size[b];
    }
}

void solve() {
    cin >> n >> m;
    int total_Cost = 0;
    g.resize(m);
    for (int i = 0; i < m; i++) {
        int x, y, c;
        cin >> x >> y >> c;
        g[i] = {c, {x, y}};
    }
    sort(g.begin(), g.end());

    for (int i = 1; i <= n; i++) {
        make(i);
    }

    for (auto& edge : g) {
        int wt = edge.F;
        int u = edge.S.F;
        int v = edge.S.S;
        if (find(u) != find(v)) {
            Union(u, v);
            total_Cost += wt;
        }
    }

    cout << total_Cost << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

////bettter code 

#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define int long long

vector<int>parent;
vector<int>rk;
int find(int x)
{
    if(parent[x]==x)return x;
    else return parent[x]=find(parent[x]);
}
bool same(int x,int y){
    int xroot=find(x);
    int yroot=find(y);
    if(xroot==yroot)return 1;
    return 0;
}
void merge(int x,int y){
    int xroot=find(x);
    int yroot=find(y);
    if(xroot!=yroot){
        if(rk[xroot]>rk[yroot]){
            parent[yroot]=xroot;
            rk[xroot]+=yroot;
        }
        else{
            parent[xroot]=yroot;
            rk[yroot]=xroot;
        }
    }
    }
void solve(){
   int n,m;
   cin>>n>>m;
   parent.resize(n+1);
   rk.assign(n+1,1);
   for(int i=1;i<=n;i++){
    parent[i]=i;
   }
   vector<pair<int, pair<int,int>>>edgelist;
   for(int i=0;i<m;i++)
   {
    int a,b,c;
    cin>>a>>b>>c;
    edgelist.push_back({c,{a,b}});
   }
   int mst_cost=0;
    int cnt=0;
   sort(edgelist.begin(),edgelist.end());
   for(auto i:edgelist){
    int x=i.second.first;
    int y=i.second.second;
    int cost=i.first;
    if(!same(x,y)){
        mst_cost+=cost;
        merge(x,y);
        cnt++;
    }
   }
    if(cnt!=n-1){
        cout<<"IMPOSSIBLE";
        return;
    }
   cout<<mst_cost<<endl;
}
signed main(){
    IOS
    int t=1;
    while(t--){
        solve();
    }
}