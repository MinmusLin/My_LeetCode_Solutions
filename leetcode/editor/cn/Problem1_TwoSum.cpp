//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        size_t n = nums.size();
        unordered_map<int, int> dic;
        for (int i = 0; i < n; i++) {
            if (dic.find(target - nums[i]) != dic.end()) {
                return {dic[target - nums[i]], i};
            }
            dic.emplace(nums[i], i);
        }
        return {};
    }
};
//leetcode submit region end(Prohibit modification and deletion)