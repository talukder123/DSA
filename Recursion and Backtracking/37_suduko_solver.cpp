class Solution {
public:
    
    bool isSafe(int row, int col, vector<vector<char>>& board, int val) {
        int n = board.size();

        for (int i=0; i<n; i++) {
            //-- row check
            if (board[row][i] == val) {
                return false;
            }
            //-- col check
            if (board[i][col] == val) {
                return false;
            }
            // -- 3x3 check
            if (board[3*(row/3) + i/3][3*(col/3) + i%3] == val) {
                return false;
            }
        }
        return true;
    }


    bool solve(vector<vector<char>>& board) {

        int n = board[0].size(); //-- the size of the martix

        for (int row = 0; i<n; row++) { //-- row traverse
            for (int col = 0; col <n; col++) { //-- column traverse
                if (board[row][col] == '.') {
                    for (char k = '1'; k <= '9'; k++) {
                        if (isSafe(row, col, board, k)) {
                        board[row][col] = k;
                        //-- recursive call --
                        bool next_solution = solve(board);
                        if (next_solution) {
                            return true;
                        } else {
                            // == Backtrack ==
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