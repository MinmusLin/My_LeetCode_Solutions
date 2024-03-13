//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
        for (const char c: str) {
            if (c == ')' || c == ']' || c == '}') {
                if (s.empty()) {
                    return false;
                } else if (c == ')' && s.top() != '(') {
                    return false;
                } else if (c == ']' && s.top() != '[') {
                    return false;
                } else if (c == '}' && s.top() != '{') {
                    return false;
                }
                s.pop();
            } else {
                s.push(c);
            }
        }
        return s.empty();
    }
};
//leetcode submit region end(Prohibit modification and deletion)