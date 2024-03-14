//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        int n = nums.size(), j = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[i - 1]) {
                nums[++j] = nums[i];
            }
        }
        return j + 1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)