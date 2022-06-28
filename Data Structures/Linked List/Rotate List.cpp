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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = head, *temp2 = head, *temp3, *newHead;
        int size = 0;
        while(temp){
            temp = temp->next;
            size++;
        }
        if(size==0)
            return head;
        int K = k%size;
        if(K==0)
            return head;
        for(int i=0;i<size-K-1;++i)
            temp2 = temp2->next;
        //cout<<temp2->val<<K;
        newHead = temp2->next;
        temp3 = newHead;
        temp2->next = NULL;
        while(temp3->next)
            temp3=temp3 -> next;
        temp3->next = head;
        return newHead;
            
    }
};
