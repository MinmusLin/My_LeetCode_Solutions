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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *head = new ListNode();
        ListNode *tail = head;
        int t = 0;
        while (l1 != nullptr || l2 != nullptr) {
            int n1 = (l1 == nullptr) ? 0 : l1->val;
            int n2 = (l2 == nullptr) ? 0 : l2->val;
            int sum = n1 + n2 + t;
            l1 = (l1 == nullptr) ? nullptr : l1->next;
            l2 = (l2 == nullptr) ? nullptr : l2->next;
            t = sum / 10;
            tail->next = new ListNode(sum % 10);
            tail = tail->next;
        }
        if (t > 0) {
            tail->next = new ListNode(t);
            tail = tail->next;
        }
        return head->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)