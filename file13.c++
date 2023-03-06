#include <iostream>
#include <bits/stdc++.h>
#include <iterator>
#include <set>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--)
    {
     int n,k,a;
     int z=0;
     cin>>n>>k;
     multiset<int>even;
     multiset<int>odd;
    
     multiset<int>::iterator itr;
     int sume=0;
     int sumo=0;
     for (int i = 0; i < n; i++)
     {   int a;
         cin>>a;
         if(i==0) { even.insert(a);
         sume=sume+a;
         cout<<"for"<<i<<"run"<<endl;}
         else if (i==1) { odd.insert(a);
         sumo=sumo+a;
         cout<<"for"<<i<<"run"<<endl;}
         else if (i%2==0){even.insert(a);
         sume=sume+a;
         cout<<"for"<<i<<"run"<<endl;}
         else if (i%2!=0){odd.insert(a);
         sumo=sumo+a;
         cout<<"for"<<i<<"run"<<endl;}
     }
     cout<<"sumo"<<sumo<<endl<<"sume"<<sume<<endl;
     if (sumo>sume)
     {
        cout<<"YES"<<endl;
     }
     else  {
                

                 for (int i = 0; i < k; i++)
                {      itr=even.end();
                       itr--;
                        cout<<"the value of even end is "<<*itr<<endl;
                        int l= *itr;
                       even.erase(even.find(l));
                       odd.insert(l);
                       sume=sume-l;
                       sumo=sumo+l;
                       cout<<"code part1 complete"<<endl;
                       cout<<"sumo"<<sumo<<endl<<"sume"<<sume<<endl;

                       itr=odd.begin();
                       int r=*itr;
                        cout<<"the value of odd begin is "<<*itr<<endl;
                       odd.erase(odd.find(r));

                       even.insert(r);
                       sume=sume+r;
                       sumo=sumo-r;
                       cout<<"code part2 complete"<<endl;
                       cout<<"sumo"<<sumo<<endl<<"sume"<<sume<<endl;
                       if (sumo>sume)
                       {
                           cout<<"YES"<<endl;
                           z++;
                           cout<<"working m"<<endl;
                          
                           return 0;
                       }
                       
                  }

     }

     cout<<"NO"<<endl;
     
    
     
    }
    return 0;
}
