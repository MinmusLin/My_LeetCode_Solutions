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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
        ListNode *head = new ListNode();
        ListNode *p = head;
        while (list1 != nullptr || list2 != nullptr) {
            int n1 = list1 == nullptr ? INT_MAX : list1->val;
            int n2 = list2 == nullptr ? INT_MAX : list2->val;
            if (n1 <= n2) {
                p->next = list1;
                list1 = list1->next;
            } else {
                p->next = list2;
                list2 = list2->next;
            }
            p = p->next;
        }
        return head->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)