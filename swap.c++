#include <bits/stdc++.h>
using namespace std;
void swap ( int* a , int* b) {
     int temp =  *a;
      *a = *b;
      *b = temp ;
    
}
void solve()
{   int a , b;
   cin >> a;
    cin >> b; 
    swap (&a , &b);
    cout <<  a <<b <<"\n";
    
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}