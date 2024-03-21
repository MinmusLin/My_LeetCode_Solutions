//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int searchInsert(vector<int> &nums, int target) {
        int a = 0, b = nums.size() - 1;
        while (a <= b) {
            int i = (a + b) / 2, m = nums[i];
            if (target == m) {
                return i;
            } else if (target < m) {
                b = i - 1;
            } else {
                a = i + 1;
            }
        }
        return a;
    }
};
//leetcode submit region end(Prohibit modification and deletion)