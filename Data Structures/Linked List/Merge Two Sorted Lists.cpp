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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode();
        ListNode* atemp = ans;
        while(list1 && list2){
            if(list1->val <= list2->val)
            {
                ListNode* temp = new ListNode(list1->val);
                atemp->next = temp;
                list1 = list1->next;
            }
            else
            {
                ListNode* temp = new ListNode(list2->val);
                atemp->next = temp;
                list2 = list2->next;
            }
            atemp = atemp->next;
        }
        if(list1)
        {
            while(list1)
            {
               ListNode* temp = new ListNode(list1->val);
                atemp->next = temp;
                list1 = list1->next;
                atemp = atemp->next;
            }
        }
        if(list2)
        {
            while(list2)
            {
               ListNode* temp = new ListNode(list2->val);
                atemp->next = temp;
                list2 = list2->next;
                atemp = atemp->next;
            }
        }
        return ans->next;
    }
};
