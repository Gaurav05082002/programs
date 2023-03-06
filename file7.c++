#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
class MyStructure {
    private :
    multiset<int , greater<int>> myset;
    
    int count=0;
    int sum=0;

    public :
    unordered_map <int , int> s;
    void add(int x) {
        myset.insert(x);
        count++;
        sum=sum+x;
        s[count]=sum;
    }

    void remove(int x) {
        if (myset.find(x)!=myset.end())
        {
            myset.erase(myset.find(x));
            count--;
            sum=sum-x;
             s[count]=sum;
        }
    }
     
    


};
int main(int argc, const char** argv) {
     MyStructure m;
     
     int q;
     int k;
     cin>>q>>k;

     while (q--)
     {
     int t;
     cin>>t;
     if (t==1)
     {
         int r;
         cin>>r;
         m.add(r);
     }
     if (t==2)
     {
           int r;
         cin>>r;
         m.remove(r);
     }
     if (t==3)
     {  char r;
        cin>>r;
        cout<<m.s[k];
         
     }
     }
    return 0;
}