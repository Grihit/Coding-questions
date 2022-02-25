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
        int size = 1;
        ListNode* temp = head;
        while(temp->next != NULL)
        {
            size++;
            temp = temp->next;
        }
        if(size==1)
            return NULL;
        ListNode* del = head;
        int dval = size-n;
        if(dval == 0)
            return head->next;
        for(int i=0;i<dval-1;++i)
            del = del->next;
        ListNode* temp1 = del->next;
        del->next = del->next->next;
        temp1 -> next = NULL;
        delete temp1;
        return head;
        
    }
};
