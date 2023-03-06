#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maxdq(int g[] , int k) {
    int temp= -1000000000;

    for (int l = 0; l < k; l++)
    {
         if (g[l] > temp)
      {
          temp = g[l];
      }
    }
  
   return temp;
}
int main(int argc, const char** argv) {
    int k;
    cin>>k;
    int a[k];
    for (int i = 0; i < k; i++)
    {
      cin>>a[i];  
    }
    int result=maxdq(a,k);
    cout<<result;
    
    return 0;
}