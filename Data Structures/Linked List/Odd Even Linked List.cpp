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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next)
            return head;
        ListNode* ans = new ListNode(head->val);
        ListNode* even = new ListNode(head->next->val);
        ListNode* temp = head -> next -> next, *otemp = ans, *etemp = even;
        int i = 3;
        while(temp){
            //cout<<temp->val<<" "<<i;
            if(i%2 == 0){
                ListNode* e = new ListNode(temp->val);
                etemp->next = e;
                etemp = etemp -> next;
            }
            else{
                ListNode* o = new ListNode(temp->val);
                otemp->next = o;
                otemp = otemp -> next;
            }
            i++;
            temp = temp->next;
        }
        otemp -> next = even;
        return ans;
    }
};
