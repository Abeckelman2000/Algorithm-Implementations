//Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
        // new dynamically allocated node, default constructor
        ListNode *dummy = new ListNode;
        // acts as the current node for traversal
        ListNode *tail = dummy;

        // while both lists have remaining nodes to process
        while (list1 && list2) {
            // append the current least node
            if (list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }

            // advance the tail
            tail = tail->next;

        }
        // appending the rest of the only remaining list
        if (list1) {
            tail->next = list1;
        }
        if (list2) {
            tail->next = list2;
        }
        // return the list excluding the first node
        return dummy->next;
    }
};
