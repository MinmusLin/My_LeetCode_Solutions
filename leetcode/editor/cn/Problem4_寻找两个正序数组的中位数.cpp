//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
        int nums1Size = nums1.size();
        int nums2Size = nums2.size();
        int n = nums1Size + nums2Size;
        bool is_average = n % 2 == 0;
        int mid = n / 2 + 1, pre = 0, curr = 0, i = 0, j = 0;
        for (int c = 0; c < mid; c++) {
            pre = curr;
            if (j >= nums2Size) {
                curr = nums1[i];
                i++;
            } else if (i >= nums1Size) {
                curr = nums2[j];
                j++;
            } else if (nums1[i] <= nums2[j]) {
                curr = nums1[i];
                i++;
            } else {
                curr = nums2[j];
                j++;
            }
        }
        if (is_average) {
            return (curr + pre) / 2.0;
        } else {
            return curr;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)