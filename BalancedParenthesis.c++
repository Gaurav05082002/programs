#include <bits/stdc++.h>
using namespace std;
int n;
vector<int>ans;
map<int,int>ansfreq;
map<int,int>freq;

void check( int level , int i){

         if(level >= n/2){
            //open remained in left side 
               int openremain = ansfreq[0]-ansfreq[1]; 
               if(openremain > 0 && freq[1] > 0 ){
                      if( i == 1){
                        return 1;
                       ;
                      }
                      else{
                        return 0;
                      }
               }
               if(openremain==0){
                    if(freq[1]==freq[0]){
                        return 1;
                    }
                    else{
                        return 0;
                    }
               }
               if(openremain>0 && freq[1]==0){
                return 0;
               }

         }
         else{
            freq[i]--;
            ansfreq[i]++;
            return 1;
         }

}

void rec(int level){
      //base case
      if(level == n ){

           for (const auto& element : ans) {
        cout << element << " ";
             }

             cout<<endl;

      }
      for (int i = 0; i < 2; i++)
      {
        if(check(level,i)){
            ans.push_back(i);
            rec(level+1);
            ans.pop_back();
        }
      }
      



}
void solve()
{
    int n;
    cin>>n;
    freq[0]=n/2;
    freq[1]=n/2;
    ansfreq[0]=0;
    ansfreq[1]=0;
    rec(0);
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t; cin>>t; while(t--)
    solve();
}