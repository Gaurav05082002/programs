#include <bits/stdc++.h>
using namespace std;
#define int long long 
void decToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}
void solve(){
    int x = 23;
    int y = 24;
    cout<<"binary for x";
    decToBinary(x);
    cout<<endl;
    cout<<"binary for y";
    decToBinary(y);
     cout<<endl;
     y=y|(1<<0);
     cout<<y<<endl;
     cout<<"binary for y";
    decToBinary(y);
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}
