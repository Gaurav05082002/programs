#include <bits/stdc++.h>
using namespace std;
int n,k;
map<int,int> mp;
vector<int> curr_perm;
vector<vector<int>> sol;
void rec(int level){
    if(level==n)
    {
        sol.push_back(curr_perm);
    }
    for (auto i : mp) 
    {
        if(i.second!=0)
        {
            mp[i.first]--;
            curr_perm.push_back(i.first);
            rec(level+1);
            mp[i.first]++;
            curr_perm.pop_back();
        }
    }
}
void solve(){
    cin>>n>>k;
	int arr[n];
	for (int i = 0; i < n; i++) 
    {
	    arr[i]=i+1;
	    mp[arr[i]]++;
	}
	rec(0);
	    for (int i = 0; i < n; i++)
        {
	        cout<<sol[k-1][i]<<" ";
	    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //int t; cin>>t; while(t--)
    solve();
}