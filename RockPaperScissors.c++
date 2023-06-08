#include<bits/stdc++.h>
using namespace std;
#define ll long long int

// 0 paper, 1 rock, 2 scissor
int dp[1001][1001][3];
int back[1001][1001][3];
int n; string s;
int a[1001];
int val[3][3];
map<int, char> mp;

int rec(int index, int rem, int last){
    if(rem<0) return -1e9;
    if(index==n) return 0;
    if(dp[index][rem][last]!=-1) return dp[index][rem][last];
    pair<int,int> ans = {0, -1};
    for(int i = 0; i < 3; i++){
        ans = max(ans, {val[i][a[index]] + rec(index+1, rem - (i==last ? 0 : 1), i), 2-i});
    }
    back[index][rem][last]=2-ans.second;
    return dp[index][rem][last]=ans.first;
}

void solve(){
    int k; cin >> n >> k >> s;
    memset(dp, -1, sizeof(dp));
    memset(val, 0, sizeof(val)); val[0][1] = val[1][2] = val[2][0]=1;
    mp[0]='P', mp[1]='R', mp[2]='S';
    for(int i = 0; i < n; i++) {
        if(s[i]=='P') a[i]=0;
        else if(s[i]=='R') a[i]=1;
        else a[i] = 2;
    }
    int maxi = 0; string astr;
    for(int j = 0; j < 3; j++){
        int last = j, rem = k;
        rec(0,k,j);
        string t;
        for(int i = 0; i < n; i++) {
            t+=mp[back[i][rem][last]];
            if(last!=back[i][rem][last]) last = back[i][rem][last], rem--;
        }
        if(maxi < rec(0,k,j)){
            maxi=rec(0,k,j); astr = t;
        }else if(maxi==rec(0,k,j)){
            astr = min(astr, t);
        }
    }

    cout << maxi << '\n';
    cout << astr << '\n';
}
 
signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0); std::cout.tie(0);
    //solve();
    int t; cin >> t; while(t--) solve();
    return 0;
}