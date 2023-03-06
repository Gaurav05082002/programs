#include <iostream>
#include <bits/stdc++.h>
using namespace std;

  
    
int main(int argc, char const *argv[])
{   
    
    int n,k,q,l,r,s,t;
    int c=0;
    cin>>n>>k>>q;
    int arr[n];
     for (int i = 1; i <= n; i++)
     {
         arr[i]=0;
     }
     for (int i = 1; i <= n; i++)
     {
         cin>>l>>r;
         arr[l]+=1;
           arr[r+1]-=1;
         
     }
     for (int i = 1; i <= q; i++)
     {
         cin>>s>>t;
         for (int i = s; i < t; i++)
         {
             if((arr[i]-arr[i-1])>=k)
             {
                c++;
             }
             cout<<c<<endl;
         }
         
     }
     
     
     
     
    return 0;
}
