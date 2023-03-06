
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, const char** argv) {
    int t;
    cin>>t;
    while(t--) {

        int n;
        int z=0;
        cin>>n;
        vector<int>a;
        map<int,int>countl;
        map<int,int>countr;
        for (int i = 0; i < n; i++)
        {
            int b;
            cin>>b;
            a.push_back(b);
            countl[b]++;
            countr[b]++;
        }
        sort(a.begin(), a.end());
        // vector<int>::iterator itr;
        // for ( itr = a.begin(); itr != a.end(); itr++)
        // {
            
        // }
        for (int i = 1; i <= n; i++)
        {
            if(((i-1)+countl[a[i-1]]) > ((n-i)-countr[a[i-1]]) ) {
                z++;
                countr[a[i-1]]--;
            }
        }
        cout<<z<<endl;
        
        
      
   
    }
    return 0;
}
