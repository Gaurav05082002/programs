#include <bits/stdc++.h>
using namespace std;
void solve()
{ 
    
    map <int, int > freq;
    int n;
    cin >> n;
    int a;
    map <int , int > :: iterator b;
    while (n--) {
         cin >> a; 
        if (freq[a] > 0 ) {
            freq[a]++;
        }
        if (freq[a] == 0 ) {
            freq[a] =1;
        }
    }
    for(b = freq.begin() ;  b!= freq.end(); b++) {
        if((b -> second) % 2 !=0 ) {

           cout << b->first;
        }
}
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}