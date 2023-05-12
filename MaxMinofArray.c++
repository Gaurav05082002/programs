#include <bits/stdc++.h>
using namespace std;
int A[];
int N;
int findSum(int A[], int N)
    {
         int mina;
         int maxa;
         int sum;
         cin>>N;
         for(int i=0; i<N;  i++ ){
             cin>>A[i];
             if(i=0){
                 maxa=A[0];
                 mina=A[0];
             }
             else {
                 maxa = max(maxa,A[i]);
                 mina = min(mina,A[i]);
             }
         }
         sum = maxa+mina;
         return sum;
    }
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    findSum(int A[], int N);
}