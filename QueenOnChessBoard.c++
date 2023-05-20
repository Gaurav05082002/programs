//Variation in the question>>> some places are reserved which do not effect attack of queen 

#include <bits/stdc++.h>
using namespace std;
int board[8][8];
int ans;
bool check(int level, int col)
{
    if (board[level][col] == 0)
    {
        // checking if there is any queen in current row level
        for (int i = 0; i < 8; i++)
        {
            if (board[i][col] == 2)
            {
                return 0;
            }
        }
        for (int j = 0; j < 8; j++)
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
        for (int i = level + 1, j = col - 1; i < 8 && j >= 0; i++, j--)
        {
            if (board[i][j] == 2)
            {
                return 0;
            }
        }

        // Check upper-right diagonal
        for (int i = level - 1, j = col + 1; i >= 0 && j < 8; i--, j++)
        {
            if (board[i][j] == 2)
            {
                return 0;
            }
        }

        // Check lower-right diagonal
        for (int i = level + 1, j = col + 1; i < 8 && j < 8; i++, j++)
        {
            if (board[i][j] == 2)
            {
                return 0;
            }
        }

        return 1;
    }
    else
    {
        return 0;
    }
}




// our level is row
void rec(int level)
{
    // base case
    if (level == 8)
    {
        ans++;
    }

    // check and move
    for (int col = 0; col < 8; col++)
    {
        if (check(level, col))
        {     

            board[level][col] = 2;
            rec(level + 1);
            board[level][col] = 0;
        }
    }
}


void solve()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            char charr;
            cin >> charr;
            if (charr == '.')
            {
                board[i][j] = 0; // Free square
            }
            else if (charr == '*')
            {
                board[i][j] = 1; // Reserved square
            }
        }
    }

    // for (int i = 0; i < 8; i++)
    // {
    //     for (int j = 0; j < 8; j++)
    //     {
    //         cout<<board[i][j];
    //     }
    // }

    //  cout<<"heya";
    rec(0);
    // if(check(0,6)){
    //     cout<<"check is working"<<endl;
    // }
    // else{
    //     cout << "not working"<<endl;
    // }
    cout << ans << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;
    // cin >> t;
    // while (t--)
        solve();
}
