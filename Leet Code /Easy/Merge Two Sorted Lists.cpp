
/*You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.*/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* merged = new ListNode(0);  // Dummy node as the starting point of the merged list
        ListNode* current = merged;  // Pointer to track the current node in the merged list

        while (l1 && l2) {
            if (l1->val <= l2->val) {  // Compare the values of the current nodes in l1 and l2
                current->next = l1;  // Append l1 to the merged list
                l1 = l1->next;  // Move to the next node in l1
            } else {
                current->next = l2;  // Append l2 to the merged list
                l2 = l2->next;  // Move to the next node in l2
            }
            current = current->next;  // Move the current pointer to the next node in the merged list
        }

        // Append any remaining nodes in l1 or l2 to the merged list
        if (l1) {
            current->next = l1;
        } else {
            current->next = l2;
        }

        return merged->next;  // Return the actual merged list (excluding the dummy node)
    }
};