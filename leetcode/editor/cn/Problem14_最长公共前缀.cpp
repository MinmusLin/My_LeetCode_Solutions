//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string longestCommonPrefix(vector <string> &strs) {
        string prefix = "";
        int len = 0, n = strs.size();
        for (const auto &str: strs) {
            int l = str.length();
            len = max(l, len);
        }
        if (len == 0) {
            return prefix;
        }
        for (int i = 0; i < len; i++) {
            char c = strs[0][i];
            bool flag = true;
            for (int j = 1; j < n; j++) {
                if (strs[j][i] != c) {
                    flag = false;
                }
            }
            if (flag) {
                prefix += c;
            } else {
                return prefix;
            }
        }
        return prefix;
    }
};
//leetcode submit region end(Prohibit modification and deletion)