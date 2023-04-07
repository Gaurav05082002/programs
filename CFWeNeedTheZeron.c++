#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int xo;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin>>y;
        if (i==0)
        {
            xo=y;
        }
        else if (i>0)
        {
            xo=xo^y;
        }

        

    }
    if(n%2==0){
        if(xo>0){
            cout<<-1<<endl;
        }
        else if(xo==0){
            cout<<0<<endl;
            return;
        
        }
    }
    else
    {
        if(xo<256){
            cout<<xo<<endl;
            return;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    
 

}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}