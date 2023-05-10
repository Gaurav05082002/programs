#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N];

// void merge(int l , int r , int mid){
 
//  int l_sz = mid - l +1;
//  int L[l_sz+1]
//  int r_sz = r- mid;
//  //r - (mid+1) +1
//  int R[r_sz+1];
//  for (int i = 0; i < l_sz; i++)
//  {
//     L[i] = a[i+l];
//  }
//   for (int i = 0; i < r_sz; i++)
//  {
//     R[i] = a[i+mid+1];
//  } 

//  L[l_sz] =R[r_sz]=INT_MAX
 



// }

void merge( int l , int r , mid){
    int l_sz = mid -l +1;
    int r_sz = r - mid;
    int A[l_sz];
    int B[r_sz];
    int C[N];
    int i =0 ;
    int j = 0;
    int k= 0;
    while(i<=l_sz && j < r_sz){
        if(A[i]<B[J]){
            C[k] = A[i];
            i++;
            k++;
        }
        else {
            C[k] = B[j];
            j++;
            k++;
        }
    }
    while(i<=l_sz){
        C[k] = A[i];
            i++;
            k++;
    }
    while(j < r_sz){
        C[k] = B[j];
            j++;
            k++;
    }

}

void mergeSort( int l , int r){
    if(l==r){return;}
    int mid = (l+r)/2;
    mergeSort(l,mid);
    mergeSort(mid+1 , r);
    merge(l,r,mid);
}




signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
     int p;
     cin>>p;
     int a[p];
     
    solve();

}