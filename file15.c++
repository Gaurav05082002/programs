#include <iostream>
#include <bits/stdc++.h>
using namespace std
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--) {
           map<string,int>m;
           map<string,int>::iterator itr;
           int n;
           cin>>n;
           for (int i = 0; i < 3n; i++)
           {
               string a;
               int b;
               cin>>a>>b;
               if (i==0)
               {
                   m[a]=b;
               }
               else if (m.find(a)==m.end())
               {
                   m[a]=b;
               }
               else {
                   m[a]+=b;
               }
               1231122300
           }
           multiset<int>ms;
           multiset<int>::iterator x;
           for(itr=m.begin();itr!=m.end();itr++) {
               ms.insert(itr->second);
           }
           for(x=ms.begin();x!=ms.end();x++){
               cout<<*x<<"";
           }

           
    }
    return 0;
}
