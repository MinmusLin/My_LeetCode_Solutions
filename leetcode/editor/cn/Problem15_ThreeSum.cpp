//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector <vector<int>> threeSum(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        vector <vector<int>> v;
        int n = nums.size();
        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int l = i + 1, r = n - 1;
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                if (sum == 0) {
                    while (l < r && nums[l] == nums[l + 1]) {
                        l++;
                    }
                    while (l < r && nums[r] == nums[r - 1]) {
                        r--;
                    }
                    v.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                } else if (sum > 0) {
                    r--;
                } else {
                    l++;
                }
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)