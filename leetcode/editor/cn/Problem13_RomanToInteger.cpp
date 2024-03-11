//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
private:
    int convert(char c) {
        switch (c) {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return 0;
        }
    }

public:
    int romanToInt(string s) {
        int len = s.length(), pre = 0, n = 0;
        for (int i = len - 1; i >= 0; i--) {
            int tmp = convert(s[i]);
            if (tmp >= pre) {
                n += tmp;
            } else {
                n -= tmp;
            }
            pre = tmp;
        }
        return n;
    }
};
//leetcode submit region end(Prohibit modification and deletion)