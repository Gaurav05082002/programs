#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
stack<char>st;
int x,y;
string s;
cin>>s>>x>>y;
string o="ab";
string p="ba";
if(y>x){
      swap(x,y);
      swap(o,p);
}
int ans=0;
for(int i= 0;i<s.length();i++){
      if(!st.empty()&&st.top()==o[0]&&s[i]==o[1]){
        st.pop();

         ans+=x;
      }
      else {
            st.push(s[i]);
      }
}
string m;
while(!st.empty()){
 m+=st.top();
 st.pop();
}
reverse(m.begin(),m.end());
for(int i=0;i<m.length();i++){
      if(!st.empty()&&st.top()==p[0]&&m[i]==p[1]){
        st.pop();

         ans+=y;
      }
      else {
            st.push(m[i]);
      }
}
cout<<ans<<endl;
}
signed main()
{
  int t;
    cin>>t;
    while(t--)
    {
  solve();
    }
return 0;
}