//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
private:
    bool row[9][10] = {false};
    bool col[9][10] = {false};
    bool block[9][10] = {false};

    bool dfs(vector <vector<char>> &board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    for (int c = 1; c <= 9; c++) {
                        if (!row[i][c] && !col[j][c] && !block[i / 3 * 3 + j / 3][c]) {
                            board[i][j] = c + '0';
                            row[i][c] = col[j][c] = block[i / 3 * 3 + j / 3][c] = true;
                            if (dfs(board)) {
                                return true;
                            }
                            board[i][j] = '.';
                            row[i][c] = col[j][c] = block[i / 3 * 3 + j / 3][c] = false;
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

public:
    void solveSudoku(vector <vector<char>> &board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char c = board[i][j] - '0';
                if (c != '.' - '0') {
                    row[i][c] = col[j][c] = block[i / 3 * 3 + j / 3][c] = true;
                }
            }
        }
        dfs(board);
    }
};
//leetcode submit region end(Prohibit modification and deletion)