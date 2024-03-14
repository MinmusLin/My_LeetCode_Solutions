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
private:
    int n = 0;

    ListNode *findMinNode(vector<ListNode *> &lists, int &k) {
        ListNode *p = nullptr;
        int val = INT_MAX;
        k = -1;
        for (int i = 0; i < n; i++) {
            if (lists[i] != nullptr && lists[i]->val < val) {
                p = lists[i];
                val = (lists[i] == nullptr) ? (INT_MAX - 1) : lists[i]->val;
                k = i;
            }
        }
        return p;
    }

public:
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        n = lists.size();
        vector < ListNode * > heads;
        for (int i = 0; i < n; i++) {
            ListNode *p = new ListNode(0, lists[i]);
            heads.push_back(p);
        }
        ListNode *head = new ListNode();
        ListNode *p = head;
        while (true) {
            int i = -1;
            p->next = findMinNode(lists, i);
            if (i == -1) {
                break;
            }
            lists[i] = (lists[i] == nullptr) ? nullptr : lists[i]->next;
            p = p->next;
        }
        return head->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)