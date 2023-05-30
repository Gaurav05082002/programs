// Description

// There are N problems in a contest and the ith problem has a rating Ri. They are posted in an order top to bottom as given in input.

// Each problem requires at least 1 minute to solve. You also know that if a problem P has a higher rating than a problem just above or just below it, then P must take strictly more time to solve than that problem. 

// Find the minimum possible time required to solve all the problems.

/*
https://www.learning.algozenith.com/problems/Fast-Solving-207
*/

// approac>You can sort all the problems according to their rating, you need to store the index as well while doing this. Then you just need to check for each problem, its rating compared to the problems above and below it. If they are lesser then the time taken for the current problem should be atleast one more than it.

// Time Complexity per test case: O(N log N) [for sorting]

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 +7;
ll N, score;
vector<ll> v, mark;

void solve(){
    set<pair<ll, ll>> S;
    cin>>N;
    v.resize(N);
    mark.assign(N, 0);
    for (ll i=0; i<N; i++){
        cin>>v[i];
        S.insert(make_pair(v[i], i));
    }

    for(auto p:S){
        ll i=p.second;
        if(i>=1 && i<=N-2){
            mark[i]=1+max(mark[i+1],mark[i-1]);
        }else if(i==0){
            mark[i]=1+max(mark[i],mark[i+1]);
        }else{
            mark[i]=1+max(mark[i],mark[i-1]);
        }
    }
    score=0;
    for (ll i=0; i<N; i++){
        score+=mark[i];
    }
    cout<<score<<'\n';

    v.clear();
    mark.clear();
    
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;

    while(t--){
        solve();
    }
}