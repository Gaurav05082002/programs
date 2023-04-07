#include <bits/stdc++.h>
using namespace std;
void solve()
{
   map<int,int>pb;
   int n;
   cin>>n;
   for(int i=0; i<n ; i++){
       int x;
       cin>>x;
       pb[x]++;
       int ans;
       map<int,int>::iterator a;
       for(a=pb.begin(); a!=pb.end(); a++){
        if(a->second > a->first || a->second == a->first){
             if(a==pb.begin()){
                ans=a->first;
            }
           else{
               if(a->first>ans){
                   ans=a->first;
               }
           } 
        }
          
       }
       cout<<ans<<endl;
   }
    
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}