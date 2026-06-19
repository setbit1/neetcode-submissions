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
    void reorderList(ListNode* head) {
        //find mid point
        ListNode* end = head;
        ListNode* mid = head;
        while(end->next && end->next->next)
        {
            mid = mid->next;
            end = end->next->next;
        }

        ListNode* curr = mid->next;
        mid->next = nullptr;

        //reverse second half
        ListNode* prev = nullptr;
        while(curr){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        //combine two lists
        curr = head;
        while(prev){
            ListNode* temp = prev->next;
            prev->next = curr->next;
            curr->next = prev;
            curr = prev->next;
            prev = temp;
        }

    }
};
