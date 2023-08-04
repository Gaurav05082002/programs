#include <vector>
#include <string>

class Solution {
public:
    bool check(int level, int col, int n, const vector<string>& board) {
        for (int i = 0; i < level; i++) {
            if (board[i][col] == 'Q') {
                return false;
            }
        }
        int x = level;
        int y = col;
        while (x >= 0 && y >= 0) {
            if (board[x][y] == 'Q') {
                return false;
            }
            x--;
            y--;
        }
        x = level;
        y = col;
        while (x >= 0 && y < n) {
            if (board[x][y] == 'Q') {
                return false;
            }
            x--;
            y++;
        }
        return true;
    }

    void solveNQueensUtil(vector<vector<string>>& solutions, vector<string>& board, int level, int n) {
        if (level == n) {
            solutions.push_back(board);
            return;
        }
        for (int col = 0; col < n; col++) {
            if (check(level, col, n, board)) {
                board[level][col] = 'Q';
                solveNQueensUtil(solutions, board, level + 1, n);
                board[level][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> solutions;
        vector<string> board(n, string(n, '.'));
        solveNQueensUtil(solutions, board, 0, n);
        return solutions;
    }
};
