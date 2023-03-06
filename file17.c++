#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--) {
        ll n;
        ll s=0;
        cin>>n;
        map<ll,ll>count;
        multiset<ll>color;
        for ( ll i = 0; i < n; i++)
        {
            ll a;
            cin>>a;
            color.insert(a);
            if(i==0) {
                count[a]=1;
            }
            else if (count.find(a)==count.end())
            {
                count[a]=1;
            }
            else{
                count[a]++;
            }
        }
        multiset<ll>::iterator x;
        for ( x = color.begin(); x!=color.end(); x++)
        {
          ll y= (*x);
          ll sum;
          if(count[y]>1) {
              count[y]--;
              sum=y+(*(color.end()--));
              color.erase(color.find(y));
              color.insert(sum);
              s++;

          }
        }
        cout<<s<<endl;
        

        
    }

    return 0;
}
