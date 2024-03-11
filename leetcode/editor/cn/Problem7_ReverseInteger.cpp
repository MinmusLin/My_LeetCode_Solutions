//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int reverse(int x) {
        int num = 0;
        while (x != 0) {
            if (num < INT_MIN / 10 || num > INT_MAX / 10) {
                return 0;
            }
            num = 10 * num + x % 10;
            x /= 10;
        }
        return num;
    }
};
//leetcode submit region end(Prohibit modification and deletion)