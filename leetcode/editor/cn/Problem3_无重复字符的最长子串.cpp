//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
        int maxLen = 0;
        for (int i = 0; i < len; i++) {
            bool map[256] = {false};
            for (int j = i; j < len; j++) {
                if (map[s[j]]) {
                    maxLen = std::max(maxLen, j - i);
                    break;
                } else {
                    map[s[j]] = true;
                    maxLen = std::max(maxLen, j - i + 1);
                }
            }
        }
        return maxLen;
    }
};
//leetcode submit region end(Prohibit modification and deletion)