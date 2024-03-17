//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
private:
    void getNext(string &needle, int next[]) {
        int k = -1;
        next[0] = -1;
        int n = needle.length();
        for (int i = 1; i < n; i++) {
            while (k >= 0 && needle[i] != needle[k + 1])
                k = next[k];
            if (needle[i] == needle[k + 1])
                k++;
            next[i] = k;
        }
    }

public:
    int strStr(string &haystack, string &needle) {
        int k = -1, n = haystack.length(), l = needle.length();
        int *next = new(std::nothrow) int[needle.length()];
        getNext(needle, next);
        for (int i = 0; i < n; i++) {
            while (k >= 0 && haystack[i] != needle[k + 1])
                k = next[k];
            if (haystack[i] == needle[k + 1])
                k++;
            if (k == l - 1) {
                delete[] next;
                return i - l + 1;
            }
        }
        delete[] next;
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)