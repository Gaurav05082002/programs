// It seems that s is a character array or a pointer to the first element of a character array. And element s[i] contains a character that represents a digit as for example '5' . To convert this character that for example in ASCII has internal code equal to 53 (while internal code of character '0' is 48) there is used expression

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int len = s.size();
    int sum = 0;
    for (int i = 0; i < len; i++)
    {   
        // cout << s[i] << endl;
        sum = sum + (s[i] - '0');
        cout <<sum<<endl;
    }
    // cout << sum << endl ; 
      
    
     
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}