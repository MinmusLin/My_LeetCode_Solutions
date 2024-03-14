//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
private:
    vector <string> ans;
    int depth;
    string str = "";

    void dfs(int n, int left, int right) {
        if (left == depth && right == depth) {
            ans.push_back(str);
        } else if (left < right) {
            return;
        }
        if (left < depth) {
            str.push_back('(');
            dfs(n + 1, left + 1, right);
            str.pop_back();
        }
        if (right < depth) {
            str.push_back(')');
            dfs(n + 1, left, right + 1);
            str.pop_back();
        }
    }

public:
    vector <string> generateParenthesis(int n) {
        depth = n;
        dfs(0, 0, 0);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)