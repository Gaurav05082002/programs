#include <bits/stdc++.h> 
using namespace std;
long long titleToNumber(string str) {
    // Write your code here
    return 0;

}
int main(){
    char A = 'A';
   cout<<int(A);
}

std:: vector<int> res;
for(const auto & query: queries){
    int left = query[0];
    int right = query[1];
    int x= query[2];
    for (int i = left; i <= right; i++)
    {
        a[i]^=x;
    }
    int orResult = a[left];
    for (int i = left+1; i <= right; i++)
    {
        orResult |= a[i];
    }
    res.push_back(orResult);

    
    
}
return res;

int butterflies(int n, vector<int> &a) {
    // Write your code here.
    int counta = 0;
    int countb = 0;
    int turn =0;
    for (int i = 0; i < a.size(); i++)
    {
         if(a[i]==1){
            counta++;
         }
         if(a[i]==2){
            countb++;
         }
    }
    if(counta%2==0){
          while(counta){
               if(countb>0){
                   countb--;
                   counta= counta-2;
                   turn=turn+2;
               } 
               else{
                break;
               }  
           }
    if(counta==0){
        turn = turn + countb;
    }
    else{
        if(counta%2==0){
            turn = turn + counta/2;
        }
        else{
            turn = turn + counta/2 +1;
        }
    }
    }
    else{
        counta= counta-1;  
        while(counta){
               if(countb>0){
                   countb--;
                   counta= counta-2;
                   turn=turn+2;
               } 
               else{
                break;
               }  
           }
    if(counta==0){
        turn = turn + countb;
    }
    else{
        if(counta%2==0){
            turn = turn + counta/2 +1;
        }
        else{
            turn = turn + counta/2 +1;
        }
    }
          }
    


    
}

int butterflies(int n, vector<int> &a) {
    int counta = 0;
    int countb = 0;
    int turn =0;
    for (int i = 0; i < a.size(); i++)
    {
         if(a[i]==1){
            counta++;
         }
         if(a[i]==2){
            countb= countb+2;
         }
    }
    while(counta && countb){
           counta--;
           countb--;
           turn++;
    }
    if(couta>0){
        if(counta%2==0){
            turn = turn + counta/2;
        }
        else{
              turn = turn + counta/2  +1;
        }
    }
    if(coutb>0){
        if(countb%2==0){
            turn = turn + countb/2;
        }
        else{
              turn = turn + countb/2  +1;
        }
    }

    return turn;
}








#include <vector>
#include <algorithm>
#include <limits>

#define INF std::numeric_limits<int>::max()

int fightingTraffic(int n, int m, std::vector<std::vector<int>>& roads, std::vector<int>& t, std::vector<int>& f, int x) {
    int low = 0;
    int high = INF;

    while (low < high) {
        int mid = low + (high - low) / 2;

        std::vector<std::vector<int>> adjList(n);
        for (int i = 0; i < m; i++) {
            int u = roads[i][0];
            int v = roads[i][1];
            int traffic = t[i];

            if (traffic <= mid) {
                adjList[u].push_back(v);
                adjList[v].push_back(u);
            }
        }

        std::vector<bool> visited(n, false);
        std::vector<int> fun(n, 0);

        std::function<void(int)> dfs = [&](int node) {
            visited[node] = true;
            fun[node] = f[node];

            for (int neighbor : adjList[node]) {
                if (!visited[neighbor])
                    dfs(neighbor);
                fun[node] |= fun[neighbor];
            }
        };

        dfs(0);

        if (fun[0] >= x)
            high = mid;
        else
            low = mid + 1;
    }

    if (low == INF)
        return -1;
    else
        return low;
}






#include <vector>
#include <algorithm>
#include <limits>
#include <functional>

#define INF std::numeric_limits<int>::max()

using namespace std;

int fightingTraffic(int n, int m, vector<vector<int>>& roads, vector<int>& t, vector<int>& f, int x) {
    int low = 0;
    int high = INF;

    while (low < high) {
        int mid = low + (high - low) / 2;

        vector<vector<int>> adjList(n);
        for (int i = 0; i < m; i++) {
            int u = roads[i][0];
            int v = roads[i][1];
            int traffic = t[i];

            if (traffic <= mid) {
                adjList[u].push_back(v);
                adjList[v].push_back(u);
            }
        }

        vector<bool> visited(n, false);
        vector<int> fun(n, 0);

        function<void(int)> dfs = [&](int node) {
            visited[node] = true;
            fun[node] = f[node];

            for (int neighbor : adjList[node]) {
                if (!visited[neighbor])
                    dfs(neighbor);
                fun[node] |= fun[neighbor];
            }
        };

        dfs(0);

        if (fun[0] >= x)
            high = mid;
        else
            low = mid + 1;
    }

    if (low == INF)
        return -1;
    else
        return low;
}
