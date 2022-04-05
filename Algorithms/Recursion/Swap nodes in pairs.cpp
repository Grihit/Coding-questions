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

ListNode* Reverse(ListNode* head){
    if(head == NULL || head->next == NULL)
        return head;
    ListNode* temp = head;
    ListNode* temp2 = head->next->next;
    head = head->next;
    head->next = temp;
    head->next->next = temp2;
    ListNode* n = Reverse(head->next->next);
    head->next->next = n;
    return head;
}
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        return Reverse(head);
    }
};
