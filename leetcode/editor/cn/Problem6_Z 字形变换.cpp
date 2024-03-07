//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) {
            return s;
        }
        vector <string> strs(numRows);
        int row = 0;
        bool goingDown = false;
        for (const char c: s) {
            strs[row] += c;
            if (row == 0 || row == numRows - 1) {
                goingDown = !goingDown;
            }
            row += goingDown ? 1 : -1;
        }
        string result;
        for (const string &str: strs) {
            result += str;
        }
        return result;
    }
};
//leetcode submit region end(Prohibit modification and deletion)