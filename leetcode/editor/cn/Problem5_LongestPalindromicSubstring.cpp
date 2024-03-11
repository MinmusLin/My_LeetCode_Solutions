//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.length();
        string sub = "";
        bool flag = true;
        for (int mid = 0; mid < len;) {
            int left = mid - 1, right = mid + 1;
            if (flag) {
                flag = false;
            } else {
                if (right < len && s[mid] == s[right]) {
                    right++;
                }
                mid++;
                flag = true;
            }
            while (left >= 0 && right < len) {
                if (s[left] == s[right]) {
                    left--;
                    right++;
                } else {
                    break;
                }
            }
            left++;
            right--;
            if (left < 0) {
                left = 0;
            }
            if (right >= len) {
                right = len - 1;
            }
            string tmp = s.substr(left, right - left + 1);
            if (tmp.length() > sub.length()) {
                sub = tmp;
            }
        }
        return sub;
    }
};
//leetcode submit region end(Prohibit modification and deletion)