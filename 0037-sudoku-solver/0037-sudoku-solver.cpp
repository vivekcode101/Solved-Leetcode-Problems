class Solution {
public:
   bool issafe(int row, int col, vector<vector<char>>& board, int val) {
    char c = '0' + val;
    for (int i = 0; i < board.size(); i++) {
        if (board[row][i] == c) {
            return false;
        }
        if (board[i][col] == c) {
            return false;
        }
        if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c) {
            return false;
        }
    }
    return true;
}

    bool solve(vector<vector<char>>& board) {
    int n = board[0].size();
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (board[row][col] == '.') {
                for (int val = 1; val <= 9; val++) {
                    if (issafe(row, col, board, val)) {
                        board[row][col] = '0' + val;
                        bool nextPossibleSolution = solve(board);
                        if (nextPossibleSolution) {
                            return true;
                        } else {
                            board[row][col] = '.';  
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};