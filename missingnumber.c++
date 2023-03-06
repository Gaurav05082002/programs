#include <bits/stdc++.h>
using namespace std;
void solve()
{

    map <int , int >a;
    map <int , int >b;
    int n;
    cin>>n;
    int ans1;
    int ans2;
    map<int, int> :: iterator it;
    for (int i = 0; i < n; i++)
    {  int x;
       cin>>x; 
       a[x]= a[x]+1;
    }
    for (int i = 0; i < n-1; i++)
    {  int y;
       cin>>y; 
       a[y]= a[y]-1;
       b[y] = b[y] +1;
    }

    for (int i = 0; i < n-2; i++)
    {  int z;
       cin>>z; 
       b[z]= b[z]-1;
       
    }

    for (it = a.begin() ; it != a.end() ; it++){
        if (it->second > 0)
        {
            ans1 = it->first;
        }
        
    }
    for (it = b.begin() ; it != b.end() ; it++){
        if (it->second > 0)
        {
            ans2 = it->first;
        }
        
    }

    cout<<ans1<<" "<<ans2<<endl;
     
  
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; 
    while(t--){
    solve();}
}