// Description

// A shop makes n types of cookies. Number of cookies of type i is Ci

// The shop only sells cookies as a pair. Moreover the two cookies in a pair must be of different types.

// Your job is to sell as many pairs as possible and find the minimum number of cookies that remain at the end.

 

 


// Input Format

// First line of input contains T, number of test cases.

// First line of each test case contains n.

// The next line contains n integers, Ci for i from 1 to n.

 


// Output Format

// For each test case output one integer: Remaining cookies

//approach>The highest cookie stack is removed first. Is it always possible to remove all the cookies from the highest cookie stack? No. It is possible only when the number of cookies in the highest stack is less than or equal to the sum of all other cookies present. Once the highest stack is reduced to zero, the remaining cookies can be paired in between themselves such that there will be either 0 or 1 cookie left.

// But if the number of cookies in the highest stack is more than all other cookies present, then all the other cookies will pair with cookies from the highest stack. Now remaining cookies in the highest stack cannot be paired anymore, so its answer will be the remaining number of cookies in the highest stack.

// EXAMPLE RUN : 

// 1

// 2 4 6 9

// The highest number of cookies is 9 and the sum of all other cookies = 2+4+6=12

// So the highest stack can be reduced to zero. So from these 12 cookies, 9 will pair with 9 cookies of the highest stack. The remaining 3 cookies can be of any combination of cookies of the 3 smaller stacks. They will pair with themselves optimally to leave only 1 cookie unpaired. So the answer is 1.

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
   int n;
   cin>>n;
   int a[n];
   int sumc=0;
   int maxc=0;
   int ans=0;
   for (int i = 0; i < n; i++)
   {
     cin>>a[i];
     sumc+=a[i];
     maxc=max(maxc,a[i]);

   }
   int sumr = sumc - maxc;
   if(sumr>=maxc){
         ans=sumr-maxc;
         ans=ans%2;
        
   }
   else{
       ans = maxc-sumr;
   }

   cout<<ans<<endl;
   



}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}