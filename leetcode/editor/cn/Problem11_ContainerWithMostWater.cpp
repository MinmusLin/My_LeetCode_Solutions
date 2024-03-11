//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxArea(vector<int> &height) {
        int volumn = 0;
        int i = 0, j = height.size() - 1;
        while (i < j) {
            volumn = max(volumn, (j - i) * min(height[i], height[j]));
            if (height[i] <= height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return volumn;
    }
};
//leetcode submit region end(Prohibit modification and deletion)