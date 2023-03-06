#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll main(ll argc, char const *argv[])
{
    ll n;
    cin>>n;
    //har city ko ek number assign kar diya 
    map<string,ll>city;
    for (ll i = 1; i <= n; i++)
    {
        string a;
        cin>>a;
        city[a]=i;
       
    }
    ll m;
    cin>>m;
    map<ll,ll>dis;
    // jaise city with index 2 se city index 3 tak ki distance di hai to usko map[23]=distance aese store kara 
    for (ll i = 1; i <= m; i++)
    {
        string c1,c2;
        ll d,e;
        cin>>c1>>c2;
        cin>>d;
        e=((city[c1]*10)+city[c2]);
        dis[e]=d;
     }
     ll t;
     cin>>t;
     while (t--) {

          ll x;
          ll sum=0;
          cin>>x;
        //   ye string array sari cities ke naam dekhne ke liye 
          string array[x];
        //   ye map number of same cities check karne ke liye 
          map<string,ll>cityno;
          
          for (ll i = 0; i < x; i++)
          {
              cin>>array[i];
              cityno[array[i]]++;
              if(cityno[array[i]]>1){
                  cout<<"ERROR"<<endl;
                  return 0;
              }


          }
          for (ll i = 0; i < x; i++)
          {
              ll y;
              
              y=(((city[array[i]]*10)+city[array[i+1]]));
              if (dis.find(y)!=dis.end())
              {sum=sum+dis[y];}
              if (dis.find(y)==dis.end())
              {
                  cout<<"ERROR"<<endl;
                  return 0;
              }
              
              
          }
          cout<<sum<<endl;

          
     }
    
    
    return 0;
}
