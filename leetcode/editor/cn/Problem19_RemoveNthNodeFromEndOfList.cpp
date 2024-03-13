//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *h = new ListNode(0, head);
        queue < ListNode * > q;
        ListNode *p = h, *pre = nullptr;
        for (int i = 0; i < n; i++) {
            q.push(p);
            p = p->next;
        }
        while (p != nullptr) {
            q.push(p);
            p = p->next;
            pre = q.front();
            q.pop();
        }
        ListNode *d = pre->next;
        pre->next = pre->next->next;
        delete d;
        return h->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)