#include <bits/stdc++.h>
using namespace std;
const int BoardSize =4;
const int CellSize = 2;
int ans=0;

int board[BoardSize][BoardSize];
/*
0 1 0 0
0 0 4 0
0 4 0 0
0 0 3 0
*/
bool check( int ch , int row, int col){
    
        //check in row 
          for (int c = 0; c < BoardSize; c++)
          {
                if(c!=col && board[row][c] == ch){
                     return false; 
                }
          }
          
        //checlk in column
           for (int r = 0; r < BoardSize; r++)
          {
                if(r!=row && board[r][col] == ch){
                     return false; 
                }
          }
        //check in square
        int str = (row/CellSize)*CellSize;
        int stc =  (col/CellSize)*CellSize;
        for (int  dx = 0; dx < 3; dx++){
              for (int  dy = 0; dy < 3; dy++)
              {
                  if(str+dx == row && stc+dy == col)continue;
                  if(board[str+dx][stc+dy]==ch)return false;
              }}

              return true;
              
       
}


void rec( int row, int col){
    if(col == BoardSize){
        rec(row+1,0);
        return;
        // so that when we reach the last column , just it shortcircuit to next row
    }
   if(row == BoardSize){
        //base case 
        ans++;
        cout<<"ANSWER"<<ans<<endl;
        for(int i=0; i<BoardSize; i++){
        for (int j = 0; j < BoardSize; j++)
        {
            cout<<board[i][j]<<"  ";
        }
        
    }

       
       

   }

   if(board[row][col]==0){
        //we need to fill
          for( int ch =1; ch < BoardSize; ch++){
               if(check(ch,row,col)){
                  board[row][col] = ch;
                  rec(row, col+1);
                  board[row][col] =0;
               }
          }
   }
   else{
        //already filled 
        if(check(board[row][col], row , col)){  //in question data is given already
            rec(row, col+1);
        }
   }
}
void solve()
{
    for(int i=0; i<BoardSize; i++){
        for (int j = 0; j < BoardSize; j++)
        {
            cin>>board[i][j];
        }
        
    }
    rec(0 , 0);
   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}