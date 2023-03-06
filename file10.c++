#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double 
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--) {
        int a , b, c;
        cin>>a>>b>>c;
        int g=__gcd(a,b);
        if(c%g==0)
        {cout<<"yes\n";}
        else
        {cout<<"no\n";}
        
    }
    return 0;
}
                             