#include <bits/stdc++.h>
using namespace std;
void solve(){
int n , q;
cin>>n>>q;
int nom[n];
for (int i = 0; i < n; i++)
{
    int x;
    cin>>x;
    nom[i]=x;
}
for (int j = 0; j < n; j++)
{

    if(j==0){
        nom[j]=nom[0];
    }
    else{
      nom[j]=nom[j]+nom[j-1];
    } 
   
}
for (int i = 0; i < q; i++)
{
   int z = 10^9+7;
   int l,r;
   int p;
   cin>>l>>r;
   p=(nom[r]-nom[l-1])%z;
   cout<<p<<endl;



}
}


signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}