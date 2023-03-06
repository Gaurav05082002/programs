#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, const char** argv) {

    string s,t;
    cin>>s;
    cin>>t;
    deque<char>dqs;
    deque<char>dqt;
    for (int i = 0; i < s.length(); i++)
    {
         if(s[i]=="a") {
             cout<<"compared"<<endl;
         }
        //      {
        //         dqs.pop_back();
        //       } 
        //     else() 
        //     {   dqs.push_back(s[i]);
        //     }
        cout<<s[i]<<endl;
    }
    for (int i = 0; i < t.length(); i++)
    {
        //  if(t[i]=="#") 
        //      {
        //         dqt.pop_back();
        //       } 
        //     else() 
        //     {   dqt.push_back(t[i]);
        //     }
        cout<<t[i]<<endl;
    }
    // if(dqs==dqt)
    // {cout<<1;}
    // else()
    // {cout<<"false";}
    
    return 0;
}