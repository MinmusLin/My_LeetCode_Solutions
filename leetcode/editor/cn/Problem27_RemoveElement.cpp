//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int removeElement(vector<int> &nums, int val) {
        int n = nums.size(), j = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != val) {
                nums[j++] = nums[i];
            }
        }
        return j;
    }
};
//leetcode submit region end(Prohibit modification and deletion)