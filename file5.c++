#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main(int argc, const char** argv) {
    int t;
    cin>>t;
    while (t--) {
        int n ,m;
        cin>>n>>m;
        int price[n];
        int sum[n];
        for (int i = 0; i < n; i++)
        {
           cin>>price[i];
           
        }

        sort(price,price+n);

        for (int  i = 0; i < n; i++)
        {
            if (i==0)
           {
              sum[i]=price[i]; 
           }
           else {
               sum[i]=sum[i-1]+price[i];
           }
            
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if(sum[i]<=m) {
                count++;
            }
            else {
                break;
            }
        }
        cout<<count<<endl;

    }
    return 0;
}