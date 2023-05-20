//Ns queen is queen with added power of knight and we are given n*n chess board and n number of Ns Queens 


//Variation in the question>>> some places are reserved which do not effect attack of queen 

#include <bits/stdc++.h>
using namespace std;
int board[14][14];
int n;
int ans , cnt;
bool check(int level, int col)
{
   
        // checking if there is any queen in current row level
        for (int i = 0; i < n; i++)
        {
            if (board[i][col] == 2)
            {
                return 0;
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (board[level][j] == 2)
            {
                return 0;
            }
        }
        // Check upper-left diagonal
        for (int i = level - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
        {
            if (board[i][j] == 2)
            {
                return 0;
            }
        }

        // Check lower-left diagonal
        for (int i = level + 1, j = col - 1; i < n && j >= 0; i++, j--)
        {
            if (board[i][j] == 2)
            {
                return 0;
            }
        }

        // Check upper-right diagonal
        for (int i = level - 1, j = col + 1; i >= 0 && j < n; i--, j++)
        {
            if (board[i][j] == 2)
            {
                return 0;
            }
        }

        // Check lower-right diagonal
        for (int i = level + 1, j = col + 1; i < n && j < n; i++, j++)
        {
            if (board[i][j] == 2)
            {
                return 0;
            }
        }
         
         if (board[level-2][col-1] == 2 || board[level-2][col+1] == 2 || board[level+2][col-1] == 2 || board[level+2][col+1] == 2 || board[level-1][col-2] == 2 || board[level-1][col+2] == 2 || board[level+1][col-2] == 2 || board[level+1][col+2] == 2)
            {    
                
                return 0;
            }


        return 1;
   
}




// our level is row
void rec(int level)
{
    // base case
    if (level == n && cnt==n)
    {
        ans++;
    }

    // check and move
    for (int col = 0; col < n; col++)
    {
        if (check(level, col))
        {     

            board[level][col] = 2;
            cnt++;
            rec(level + 1);
            board[level][col] = 0;
            cnt--;
        }
    }
}


void solve()
{    
    cin>>n;
    
    rec(0);
    
    cout << ans << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
        
        solve();
}
