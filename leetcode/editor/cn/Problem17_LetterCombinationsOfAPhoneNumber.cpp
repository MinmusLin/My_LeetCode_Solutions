//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
private:
    unordered_map<char, string> map = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
    };
    int len = 0;
    vector <string> ans;
    string str;
    string num;

    void dfs(int n) {
        if (n == len) {
            ans.push_back(str);
        } else {
            for (int i = 0; i < map.at(num[n]).length(); i++) {
                str.push_back(map.at(num[n])[i]);
                dfs(n + 1);
                str.pop_back();
            }
        }
    }

public:
    vector <string> letterCombinations(string digits) {
        num = digits;
        len = digits.length();
        if (len != 0) {
            dfs(0);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)