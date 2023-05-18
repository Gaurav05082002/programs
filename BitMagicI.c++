#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

void solve()
{
    int q;
    cin>>q;
    ll val =0;
    while(q--){
      int t,i;
    cin>>t;
        if(t==1){
              cin>>i;
              if( (val>>i)&1 ){

                cout<<1<<endl;
              }
              else{
                cout<<0<<endl; 
              }
            
                 }
        if(t==2){
            cin>>i;
            val = val|(1LL<<i);
        }
        if(t==3){
            cin>>i;
            val = val&(~(1LL<<i));
        }
        if(t==4){
            cin>>i;
            val = val^(1LL<<i);
        }
        if(t==5){
            if(__builtin_popcountll(val)==60){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        if(t==6){
            if(val!=0){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        if(t==7){
            if(val==0){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        if(t==8){
            cout<<__builtin_popcountll(val)<<endl;
        }
        if(t==9){
            cout<<val<<endl;
        }


}
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
  
    solve();
}