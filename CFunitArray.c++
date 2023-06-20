#include <bits/stdc++.h>
using namespace std;
void solve()
{   int n;
    int a[101];
    countp=0;
    countn=0;
    turn=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        
        cin>>a[i];
        if(a[i]==1){
            countp++;
        }
        if(a[i]==-1){
            countn++;
        }
    }
    if(countn%2==0){

        if(countp<countn){
            turn = countn - countp;
            if(turn%2!=0){
                 turn =turn+1;
            }
        }
    }
    else{
        if(countp>=countn){
            turn = turn+1;
        }
        else if (countn>countp)
        {
            turn = countn - countp;
            if(turn%2==0){
                 turn =turn+1;
            }
        }
    }
    cout<<turn<<endl;
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}