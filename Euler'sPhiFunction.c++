//the below code is applicable for 10^7 (commented out) it is not optimized to 10^12 
// #include <bits/stdc++.h>
// using namespace std;
// #define long long int;


//  int n;
//  //n is countin 1 
// int cnt = 1;



// void solve()
// {
//     vector<bool> istotative(n, 1);
//     for (int i = 2; i < n; i++)
//     {   
//         if (istotative[i])
//         {
//             if (n % i == 0)
//             {
              
//                 for (int j = 2 * i; j< n; j += i)
//                 {
//                     istotative[j] = false;
                    
                        
                    
                    
                
//                 }
//             }
//             else{
           
      
//             cnt++;
//         }
//         }
        
//     }
//     cout<<cnt<<endl;
// }
// signed main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
     
//       cin>>n;
//         solve();
// }



#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n;
    cin >> n;

    ll ans = n;

    for(ll i = 2; i * i <= n; i++) {
        bool is = false;
        while(n % i == 0) {
            n /= i;
            is = true;
        }
        if(is) {
            ans /= i;
            ans *= (i - 1);
        }
    }

    if(n > 1) {
        ans /= n;
        ans *= (n - 1);
    }

    cout << ans << "\n";
}