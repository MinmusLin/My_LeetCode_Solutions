//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        int n = nums.size(), i = 0, j = n - 1, m;
        while (i <= j) {
            m = (i + j) / 2;
            if (nums[m] == target) {
                int l = m - 1, r = m + 1;
                while (l >= 0 && nums[l] == target) {
                    l--;
                }
                while (r < n && nums[r] == target) {
                    r++;
                }
                return {l + 1, r - 1};
            } else if (nums[m] <= target) {
                i = m + 1;
            } else {
                j = m - 1;
            }
        }
        return {-1, -1};
    }
};
//leetcode submit region end(Prohibit modification and deletion)