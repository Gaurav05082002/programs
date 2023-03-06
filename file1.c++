#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int main(int argc, const char** argv) {
    
    int t;
    cin>>t;
    while (t--) {
        int n ,m ;
      cin>>n>>m;
      long long int a[n];
      for ( int  i = 0; i < n; i++)
      {
          cin>>a[i];
      }
       sort(a,a+n);
      long long int b;
      for (int  x = 0; x < m; x++)
      {
           cin>>b;
           int y = binary_search(a,a+n,b);
           if (y==1)
           {
               cout<<"YES"<<endl;
           }
           else 
           {
               cout<<"NO"<<endl;
           }
          
      }
     
    }
    return 0;
   
}
