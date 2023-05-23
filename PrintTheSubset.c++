#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int mod=1e9+7;
void solve()
{
  int n;
    cin>>n;
    int arr[n];
    //multiset<int> mt;
    int x;
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int pre[n+1];
    pre[0]=0;
    map<int,int> mp;
    mp[0]=0;
    for(int i=1;i<=n;i++){
        
        pre[i]=arr[i-1]+pre[i-1];
        if(mp[pre[i]%n]!=0){
            cout<<"YES"<<endl;
            return;
        }else{
             mp[pre[i]%n]++;
        }  
    }
    cout<<"NO"<<endl;
}

signed main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int _t=1;
 cin>>_t;
while(_t--){
   solve();
}
}