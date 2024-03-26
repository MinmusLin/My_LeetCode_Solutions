//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isValidSudoku(vector <vector<char>> &board) {
        bool row[9][10] = {false};
        bool col[9][10] = {false};
        bool block[9][10] = {false};
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char c = board[i][j] - '0';
                if (c != '.' - '0') {
                    if (row[i][c]) {
                        return false;
                    } else {
                        row[i][c] = true;
                    }
                    if (col[j][c]) {
                        return false;
                    } else {
                        col[j][c] = true;
                    }
                    if (block[i / 3 * 3 + j / 3][c]) {
                        return false;
                    } else {
                        block[i / 3 * 3 + j / 3][c] = true;
                    }
                }
            }
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)