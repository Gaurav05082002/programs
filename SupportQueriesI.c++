#include <bits/stdc++.h>
using namespace std;


map<long long int, long long int> stu;

void add() {
    long long int x;
    cin >> x;
    stu[x]++;
}

void removen() {
    long long int x;
    cin >> x;
    if (stu[x] > 0) {
        stu[x]--;
        if (stu[x]==0){
         stu.erase(x);
    }
    }
    
}

void printmin() {
    char x;
    cin >> x;
    if (stu.empty() ) {
        cout << -1 << endl;
    } else {
        cout << stu.begin()->first << endl;
    }
}

void printmax() {
    char x;
    cin >> x;
    if (stu.empty()) {
        cout << -1 << endl;
    } else {
        cout << stu.rbegin()->first << endl;
    }
}

void sum() {
    long long int sum = 0;
    char x;
    cin >> x;
    for (auto it = stu.begin(); it != stu.end(); it++) {
        sum += it->first * it->second;
    }
    cout << sum << endl;
}

void solve() {
    long long int m;
    cin >> m;

    switch (m) {
        case 1:
            add();
            break;
        case 2:
            removen();
            break;
        case 3:
            printmin();
            break;
        case 4:
            printmax();
            break;
        case 5:
            sum();
            break;
        default:
            cout << "Invalid option" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}







// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
// map<int,int>stu;
// int emptyflag=0;
// void add(){
//     int x;
//     cin>>x;
//     stu[x]++;
//     emptyflag++;
// }
// void removen(){
//     int x;
//     cin>>x;
//     if(stu[x]>0){stu[x]--;
//                 emptyflag--;}
//  }
// void printmin(){
//     int x;
//     cin>>x;
//     if(emptyflag){cout<<stu.begin()->first<<endl;}
//     else{cout<<-1<<endl;}
    
// }
// void printmax(){
//     int x;
//     cin>>x;
//     if(emptyflag){
//     cout<<stu.rbegin()->first<<endl;}
//     else{cout<<-1<<endl;}
// }
// void sum(){
//     map<int,int>::iterartor it;
//     long long int sum=0;
//     for(it=stu.begin(); it!=stu.end(); it++){
//         if(emptyflag>0){
//         sum=sum+(t->first)*(it->second)}
//         else{
//             sum=0;
//         }
//     }
//     cout<<sum<<endl;
// }
// int m;
// cin>>m;


// switch (m){
//   case 1:
//     add();
//     break;
//   case 2:
//     removen();
//     break;
//   case 3:
//     printmin();
//     break;
//   case 4:
//     printmax();
//     break;
//   case 5:
//     sum();
//     break;
// } 



// }

// signed main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);cout.tie(0);
//     int t; cin>>t; while(t--)
//     solve();
// }