#include <bits/stdc++.h>
using namespace std;
int n,k , cnt;
int a[100100];
map<int, int> freq;
vector<int> per;
bool check(int ch){
   
   if(freq[ch]>0){
    return 1;
   }
   else{
    return 0;
   }

}
void rec( int level){
    // base case
    if(level == n){ cnt++;
       if(cnt == k){
             for (const auto& value : per) {
        cout <<value<< " ";
    }cout<<endl;
       }
            
    
    //  per.clear();

    }
    //choice & move
    for (const auto& pair : freq) {
        int key = pair.first;
        if(check(key)){
            per.push_back(key);
            freq[key]--;
            rec(level+1);
            per.pop_back();
            freq[key]++;
        }
       
        // int value = pair.second;
        
    }
    


    
}


void solve()
{
   cin>>n>>k;
 for(int i=0; i<n; i++){
       a[i]=i+1;
     freq[a[i]]++;
  }

  rec(0);
    
    
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t; cin>>t; while(t--)
    solve();
}