// #include <bits/stdc++.h>
// using namespace std;
// using lli = long long;
// void solve()
// { lli n,l;
//   lli cnt=0;
//   cin>>n>>l;
//   vector<pair<pair<lli,lli>,lli>> events;
//   for (lli i = 0; i < n; i++)
//   {  lli s,e;
//      cin>>s>>e;
//      events.push_back({{s,1},e});
//      events.push_back({{e,2},s});
//   }
//   sort(events.begin(),events.end());

//   vector<pair<pair<lli,lli>,lli>> potential;
//   pair<pair<lli,lli>,lli> active;
//   lli nextchangingpoint=0;


//   for (lli i = 0; i < events.size(); i++)
//   {
//       lli j = i;
//       while (j<events.size() && events[j].first == events[i].first && events[j].second == 1)
//       {
//         potential.push_back(events[j]);
//         j++;
//       }
//       while (j<events.size() && events[j].first == events[i].first && events[j].second == 2)
//       {  potential.erase(potential.begin() + j);
        
//         j++;
//       }
      
//       if(i==nextchangingpoint){
         
//          cnt++;
//          lli maxnn=0;
//        for (const pair<pair<lli, lli>, lli>& np : potential) {
//         const pair<lli, lli>& p = np.first;
//         lli value = np.second;
//         lli first1 = p.first;
//         lli second1 = p.second;
        
//         if(value-i > maxnn){
//             nextchangingpoint = value;
//             maxnn=value-i;

//         }
//         }
//       }
//     i = j-1;
// }
//   cout<<cnt<<endl;
  
  
   
// }
// signed main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);cout.tie(0);
//     // int t; cin>>t; while(t--)
//     solve();
// }



#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int solve(vector<pair<ll,ll>> &v, ll L) {
    map<ll,ll> M;
    for(auto it : v) {
        M[it.first] = max(M[it.first], it.second);
    }

    int ans = 0;
    ll last = 0, maxi = 0;

    for(auto it : M) {
        if(it.first == last) {
            maxi = max(maxi, it.second);
            last = maxi;
            ans++;
        }
        else if(it.first > last) {
            ans++;
            last = maxi;
        }
        maxi = max(maxi, it.second);
    }

    if(last < L) ans++;

    return ans;
}

signed main() 
{
    ios::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);   

    int n;
    ll L;
    cin >> n >> L;

    vector<pair<ll,ll>> v;
    for(int i = 0; i < n; i++) {
        ll l, r;
        cin >> l >> r;
        v.push_back({l, r});
    }

    cout << solve(v, L) << "\n";
}