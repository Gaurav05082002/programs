#include <bits/stdc++.h>
using namespace std;
void solve()
{
 int n,m;
   cin>>n>>m;
   map <long long int , int> frequency;
   for (int i = 0; i < n; i++)
   {
     long long int temp;
     cin>>temp;
     frequency[temp]++;
     
   } 

   for (int i = 0; i < m; i++)
   {
      long long int temp2;
      cin>>temp2;
      if(frequency[temp2]){
        cout<<"YES";
        cout<<endl;

       }
       else{
         frequency[temp2]++;
        cout<<"NO";
        cout<<endl;
       }
   }
}   
   


signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
} 