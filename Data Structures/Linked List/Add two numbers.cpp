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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode *ptrl1, *ptrl2;
        ptrl1 = l1;
        ptrl2 = l2;
        ListNode *ans = new ListNode(0);
        ListNode *temp = ans;
        while(l1 != NULL || l2 != NULL)
        {
            int sum = carry;
            if(l1 != NULL)
            {
                sum = sum + l1 -> val;
                l1 = l1 -> next;
            }
            if(l2 != NULL)
            {
                sum = sum + l2 -> val;
                l2 = l2 -> next;
            }
            carry = sum/10;
            ans -> next = new ListNode(sum%10);
            ans = ans -> next;
           
        }
         if(carry>0)
                ans -> next = new ListNode(carry);
        return temp -> next;
    }
};
