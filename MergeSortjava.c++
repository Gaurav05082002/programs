#include <bits/stdc++.h>
using namespace std;

void conquer( int arr[] , int si , int mid , int ei ){
    int merged[] = new int[ei - si +1];
    int idx1 =si;
    int idx2 = mid+1;
    int x=0 ;
     while (idx1 <= mid && idx2 <= ei){
        if(arr[idx1] <= arr[idx2]){
            merged[x++]=arr[idx2++];

        }
        else {
            merged[x++]=arr[idx1++];
        }
     }
     
     while(idx1 <= mid){
        merged[x++]=arr[idx1++];
     }
     while(idx1 <= ei){
        merged[x++]=arr[idx2++];
     }


     for(int i=0, j=si; i<merged.length ; i++,j++){
        arr[j] = merged[i];
     }
}

void divide(int arr , int si , int ei) {
    
    if(si >= ei){
        return;
    }

    mid = si + (ei-si)/2;
     divide(arr, si , mid);
     divide(arr , mid+1 ,ei);
     conquer(arr , si , mid , ei)
}


void solve(){

int arr[] = {6,3,9,5,2,8};
int n = arr.length;

divide(arr , 0 , n-1);
for (int i = 0; i < n; i++)
{
    cout<<arr[i];
}

  




}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
   
    solve();
}