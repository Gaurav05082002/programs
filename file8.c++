#include <iostream>
#include <bits/stdc++.h>
using namespace std;
main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int , int> m;
        int r=1;
        for (int i = 1; i <= n; i++)
        {   int v;

            cin>>v;
            m[i]=v;
            if(i>1) 
            {
                if (m[i]>=i && m[i-1]>=i)
                 {
                r=i;
                  }
            }

            cout<<r<<endl;

        }

    }
}