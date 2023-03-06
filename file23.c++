#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        map<int,int>cnt;
        int function check(int x) {
            return (cnt[x] > n-cnt[x]);
        }
        for (int i = 1; i <= n; i++)
        {
           cin>>a[i];
        }
       sort(a, a + n);
        int temp=0;
        for (int i = 1; i <= n; i++)
        {
           temp++;
           cnt[a[i]]=temp;
        }
        
        int lo = 1;
        int hi = n;
        int ans = 1;
        int y;
        while (lo<=hi) {
        int mid = (lo+hi)/2;
        y=a[mid];
        if(check(y)) {
            lo=mid+1;
        }
        else {
            ans=mid;
            hi=mid-1;
        }
        }
        cout<<n-ans<<endl;
    }
    return 0;
}
