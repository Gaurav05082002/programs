#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s ;
    char a[100000]; 
    int cnt=0 ;
    int len = s.size();
    for ( int i = 0 ; i < len ; i++){
      if ( 'a'<=s[i]<='z'){
             a[cnt] = s[i];
      cnt++;
      }
    }
                    
    for ( int l =0; l<(cnt/2-1) ; l++) {
        if ( a [l] != a[cnt-l]) {
            cout << "NO" << endl;
           return ;}
    }    
    cout << "YES" << endl;
    
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}