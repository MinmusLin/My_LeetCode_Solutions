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
    ListNode *swapPairs(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode *h = new ListNode(0, head);
        ListNode *pre = h, *cur = pre->next, *next = cur->next;
        while (true) {
            pre->next = next;
            cur->next = next->next;
            next->next = cur;
            if (cur->next == nullptr || cur->next->next == nullptr) {
                return h->next;
            } else {
                pre = cur;
                cur = pre->next;
                next = cur->next;
            }
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)