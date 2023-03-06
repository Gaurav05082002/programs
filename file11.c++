#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main() {
    int n,q;
    cin>>n>>q;
    int mod=10e9+7;
    int sum[n];
    int l,r;
    int a;

    for (int i = 0; i < n; i++)
    {   cin>>a;
        int temp=a%mod;
        if(i==0) {
            sum[i]=temp;
        }
        else {
            sum[i]=((sum[i-1]+temp)%mod);
        }
    }
    for (int i = 0; i < q; i++)
    {
        cin>>l>>r;
        cout<<(sum[r]-sum[l-1])%mod;

    }
    
    
return 0;
}