#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maxdq(deque<int> g , int k) {
    int temp= -1000000000;
    
    for (int l = 0; l < k; l++)
    {
         if (g.at(l) > temp)
      {
          temp = g.at(l);
      }
    }
  
   return temp;
}
int main(int argc, const char** argv) {

    int t;
    cin>>t;
    while (t--) {
        int n,k;
        int a[n];
        for (int i=0 ; i<n ; i++) {
            cin>>a[i];
        }
        deque<int>dq{};
        for (int t = 0; t < k; t++)
        {
            dq.push_back(a[t]);
        }
        int result = maxdq(dq,k);
        cout<<result;
        
    }
    return 0;
}