// Output Format

// For each test case, print 'YES' if such a subset exists, otherwise print 'NO'.


// Constraints

// 1 ≤ T ≤ 10
// 1 ≤ N ≤ 105
// 1 ≤ Ai ≤ 109


// Sample Input 1

// 1
// 3
// 4 6 10

// Sample Output 1

// YES

// Note

// We can pick {6} as the subset, then its sum is 6 and this is divisible by 3 - the size of the initial multiset.


// solution> Let's consider a multiset with a total of N elements. When choosing a subset from this multiset, we have 2^N possible subsets, including the empty set.

// Now, let's examine the possible remainders when summing the elements of each subset modulo N:

// If the sum of elements in a subset is divisible by N, then the remainder will be 0.
// If the sum of elements in a subset is not divisible by N, then the remainder will be a non-zero value.
// Since there are N possible remainders (0 to N-1) and 2^N subsets, by the Pigeonhole Principle, there must exist at least one remainder that corresponds to multiple subsets. This means that there will be at least two subsets whose sum of elements gives the same remainder when divided by N.

// Consider these two subsets: Subset A and Subset B. The sum of elements in Subset A modulo N is the same as the sum of elements in Subset B modulo N. Let's call this common remainder R.

// Now, if we take the symmetric difference of Subset A and Subset B (i.e., the elements that are in either A or B but not in both), we will obtain another subset whose sum of elements is divisible by N.

// Therefore, it is always true that there exists at least one subset of a multiset such that the sum of the elements in the subset modulo the total number of elements in the multiset is equal to zero





#include <bits/stdc++.h>
using namespace std;
int n;
int arr[100100];
void solve()
{    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"YES"<<endl;
    
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}