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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* nHead = head;
        int n = 0;
        while(nHead){
            nHead = nHead -> next;
            n++;
        }
        int t = n/k;
        ListNode* ptr = head;
        ListNode* prev = NULL;
        while(ptr && t--){
            ListNode* revLast = ptr;
            ListNode* rev = NULL;
            ListNode* newHead;
            for(int i=0;ptr && i<k;++i){
                ListNode* temp = ptr;
                newHead = ptr;
                ptr = ptr -> next;
                temp -> next = rev;
                rev = temp;
            }
            revLast -> next = ptr;
            if(prev)
                prev -> next = newHead;
            else
                head = newHead;
            prev = revLast;
        }
        return head;
    }
};
