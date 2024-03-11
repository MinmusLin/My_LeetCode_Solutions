//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int myAtoi(string s) {
        int num = 0;
        bool hasNum = false;
        bool minus = false;
        bool hasSign = false;
        for (const char c: s) {
            if (!hasNum && !hasSign && c == ' ') {
                continue;
            } else if (!hasNum && c == '+') {
                if (hasSign) {
                    break;
                }
                hasSign = true;
            } else if (!hasNum && c == '-') {
                if (hasSign) {
                    break;
                }
                hasSign = true;
                minus = true;
            } else if (c >= '0' && c <= '9') {
                hasNum = true;
                if (num > INT_MAX / 10 || (num == INT_MAX / 10 && (c == '8' || c == '9'))) {
                    return INT_MAX;
                } else if (num < INT_MIN / 10 || (num == INT_MIN / 10 && c == '9')) {
                    return INT_MIN;
                }
                num = num * 10 + (minus ? ('0' - c) : (c - '0'));
            } else {
                break;
            }
        }
        return num;
    }
};
//leetcode submit region end(Prohibit modification and deletion)