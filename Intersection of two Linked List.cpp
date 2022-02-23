/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int> hash;
        ListNode *tempA = headA;
        ListNode *tempB = headB;
        hash[tempA]++;
        hash[tempB]++;
        if(hash[tempA]>1)
            return tempA;
        while(tempA -> next != NULL || tempB -> next != NULL){
            if(tempA->next != NULL)
            {
                tempA = tempA->next;
                hash[tempA]++;
            }
            if(tempB->next != NULL){
                tempB = tempB->next;
                hash[tempB]++;
            }
            if(hash[tempA]>1)
                return tempA;
            if(hash[tempB]>1)
                return tempB;
                
        }
        return NULL;
    }
};
