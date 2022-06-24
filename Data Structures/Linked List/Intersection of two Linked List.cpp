// space - (m+n)
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         unordered_map<ListNode*,int> hash;
//         ListNode *tempA = headA;
//         ListNode *tempB = headB;
//         hash[tempA]++;
//         hash[tempB]++;
//         if(hash[tempA]>1)
//             return tempA;
//         while(tempA -> next != NULL || tempB -> next != NULL){
//             if(tempA->next != NULL)
//             {
//                 tempA = tempA->next;
//                 hash[tempA]++;
//             }
//             if(tempB->next != NULL){
//                 tempB = tempB->next;
//                 hash[tempB]++;
//             }
//             if(hash[tempA]>1)
//                 return tempA;
//             if(hash[tempB]>1)
//                 return tempB;
                
//         }
//         return NULL;
//     }
// };

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//space = (1)
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptrA, *ptrB;
        ptrA = headA;
        ptrB = headB;
        int countA=0, countB=0;
        while(ptrA){
            countA++;
            ptrA = ptrA -> next;
        }
        while(ptrB){
            countB++;
            ptrB = ptrB -> next;
        }
        //cout<<abs(countA-countB);
        ListNode* ptr1 = countA>countB ? headA : headB;
        ListNode* ptr2 = countA>countB ? headB : headA;
        for(int i=0;i<abs(countA-countB);++i)
            ptr1 = ptr1 -> next;
        while(ptr1 && ptr2){
            if(ptr1 == ptr2)
                return ptr1;
            ptr1 = ptr1 -> next;
            ptr2 = ptr2 -> next;
        }
        return NULL;
    }
};
