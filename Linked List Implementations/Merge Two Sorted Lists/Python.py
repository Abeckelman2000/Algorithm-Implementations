# Definition for singly-linked list.
 class ListNode(object):
     def __init__(self, val=0, next=None):
         self.val = val
         self.next = next
        
        
class Solution(object):
    def mergeTwoLists(self, list1, list2):
        dummy = ListNode()
        tail = dummy

        # if both lists are empty return an empty list
        if not list1 and not list2:
            return dummy

        # while both lists have remaining nodes
        while list1 and list2:
            # appending the current least node
            if list1.val <= list2.val:
                tail.next = list1
                list1 = list1.next
            else:
                tail.next = list2
                list2 = list2.next

            # advance the tail
            tail = tail.next
        # append the rest of list1
        if list1:
            tail.next = list1
        # append the rest of list2
        if list2:
            tail.next = list2
        return dummy.next

