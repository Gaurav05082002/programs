#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    int r=1;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string a;
        cin>>a;
        int uc=0;
        int lc=0;
        int d=0;
        int hash=0;
        
        for (int i = 0; i < n; i++)
        {
               if('a'<=a[i] && a[i]<='z')
               {lc++;}
                else if('A'<=a[i] && a[i]<='Z')
               {uc++;}
              else if('0'<=a[i] && a[i]<='9')
               {d++;}
               else if (a[i]=='#'||a[i]=='@'||a[i]=='*'||a[i]=='&')
               {hash++;}
              
        }

        if(uc==0)
        { string b="A";
            a=a+b;}
        if(lc==0)
        { string b="a";
            a=a+b;}
        if(d==0)
        { string b="1";
            a=a+b;}
        if(hash==0)
        { string b="#";
            a=a+b;}
            
        int len = a.length();
        if(len>=7){
            cout<<"Case #"<<r<<": "<<a<<endl;
        r++;
        }
        else {
            int x=(7-len);
            for (int i = 0; i < x; i++)
            {
              a=a+"1";
            }
            cout<<"Case #"<<r<<": "<<a<<endl;
        r++; 
        }

            
        
        
    }
    return 0;
}
