//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        } else {
            int num = 0, n = x;
            while (x != 0) {
                if (num > INT_MAX / 10) {
                    return false;
                }
                num = 10 * num + x % 10;
                x /= 10;
            }
            return num == n;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)