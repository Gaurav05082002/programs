#include <bits/stdc++.h>
using namespace std;
// we have to find nth root of m;
double mul(double mid , n){
    
    for (int i = 0; i < n; i++)
    {
        mid = mid * mid; 
    }
    return mid;
    
}
void solve()
{
    int n;
    double m;
    cin>>n>>m;
   //we will be shortning the range 
   double lo = 1.0;
   double hi = m;
   double esp = 1e-7;
   while((hi-lo)>esp){
    double mid = (hi+lo)/2;
    if(mul(mid,n)<m){
        low = mid;
    }
    else{
        high = mid;
    }

   }
   cout<<lo<<endl;


}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}