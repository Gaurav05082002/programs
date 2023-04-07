#include <bits/stdc++.h>
using namespace std;

void solve(){

int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    int y;
    cin>>y;
    arr[i]=y;
}
for (int j = 0; j <= 256; j++)
{   int z;
    for (int i = 0; i < n; i++)
    {
        int brr[n];
        brr[i]=arr[i]^j;
        if (i==0)
        {
            z=brr[i];
        }
        else if (i>0)
        { 
            z=z^brr[i];
            cout<<"j is"<<j<<"this"<<z<<"xor"<<brr[i]<<endl;
        }
        
       



    }
    if(z==0){
        cout<<j<<endl;
        return;
    }
}
cout<<-1<<endl;





}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}