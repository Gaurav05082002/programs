#include <bits/stdc++.h>
using namespace std;
int solution(vector<int> numbers){
    int cnt=0;
    for (int i = 2; i < numbers.size(); i++)
    {
        if(numbers[i]!=numbers[0] && numbers[i]!=numbers[1]){
            cnt++;
        }
    }
    return cnt;
    
}
// void solve()
// {
   
// }
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t; cin>>t; while(t--)
    vector<int> vect{4,3,2,3,2,5,4,3};
    cout<<solution(vect);

}