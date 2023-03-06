#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    int i=1;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string a;
        cin>>a;
        string b="aA&";
        string c=a+b;
        cout<<"Case #"<<i<<":  "<<c<<endl;
        i++;
    }
    return 0;
}
