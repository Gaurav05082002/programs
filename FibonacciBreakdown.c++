// Given a number k, find the minimum number of fibonacci numbers

// whose sum is equal to k. You can use any of the fibonacci numbers  

// any number of times.

// Fibonacci Numbers:

// F(1) = 1

// F(2) = 1

// F(n) = F(n-1) + F(n-2) : for n>=


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j;

    cin >> t;

    long long fib[50];
    fib[1]=fib[2]=1;
    for(i=3;i<50;i++) fib[i]=fib[i-1]+fib[i-2];

    while (t--)
    {
        int k;
        cin>>k;
        int take=49,ans=0;
        while(k>0)
        {
            if(k>=fib[take])
            {
                k-=fib[take];
                ans++;
            }
            take--;
        }
        cout<<ans<<'\n';
    }
}