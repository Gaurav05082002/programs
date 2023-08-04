#include <bits/stdc++.h>
using namespace std;
void solve()
{
   char grid [3][3];
   for (int i = 0; i < 3; i++)
   {
        for (int  j = 0; j < 3; j++)
        {
            cin>>grid[i][j];
        }
        
   }
   for (int i = 0; i < 3; i++)
   {
        if(grid[i][0]==grid[i][1]==grid[i][2]=="X"){
               cout<<"X"<<endl;
               return;
        }
        if(grid[i][0]==grid[i][1]==grid[i][2]=="O"){
               cout<<"O"<<endl;
               return;
        }
        if(grid[i][0]==grid[i][1]==grid[i][2]=="+"){
               cout<<"+"<<endl;
               return;
        }
   }
   for (int j = 0; j < 3; j++)
   {
        if(grid[0][j]==grid[1][j]==grid[1][j]=="X"){
               cout<<"X"<<endl;
               return;
        }
        if(grid[0][j]==grid[1][j]==grid[1][j]=="O"){
               cout<<"O"<<endl;
               return;
        }
        if(grid[0][j]==grid[1][j]==grid[1][j]=="+"){
               cout<<"+"<<endl;
               return;
        }
   }

   if(grid[0][0]==grid[1][1]==grid[2][2]=="X"){
       cout<<"X"<<endl;
               return;
   }
   if(grid[0][0]==grid[1][1]==grid[2][2]=="O"){
       cout<<"O"<<endl;
               return;
   }
   if(grid[0][0]==grid[1][1]==grid[2][2]=="+"){
       cout<<"+"<<endl;
               return;
   }

   if(grid[2][0]==grid[1][1]==grid[0][2]=="X"){
       cout<<"X"<<endl;
               return;
   }
   if(grid[2][0]==grid[1][1]==grid[0][2]=="O"){
       cout<<"O"<<endl;
               return;
   }
   if(grid[2][0]==grid[1][1]==grid[0][2]=="+"){
       cout<<"+"<<endl;
               return;
   }
   cout<<"DRAW"<<endl;
   
   

}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}