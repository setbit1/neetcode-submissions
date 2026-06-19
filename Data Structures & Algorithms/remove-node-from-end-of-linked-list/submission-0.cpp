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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode dummy(0, head);
        ListNode* nth = &dummy, *end = &dummy;
        while(n--)
            end = end->next;
        
        while(end && end->next)
        {
            end = end->next;
            nth = nth->next;
        }
        
        ListNode* nodeToDelete = nth->next;
        nth->next = nth->next->next;

        delete nodeToDelete;

        return dummy.next;
    }
};
