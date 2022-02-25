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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        if(head==NULL)
            return head;
        while(temp->next!=NULL){
            ListNode* NewHead = temp->next;
            temp->next = temp->next->next;
            NewHead->next = head;
            head = NewHead;
        }
        return head;
    }
};
