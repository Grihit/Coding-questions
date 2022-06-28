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

//Recursive Solution
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if(head == NULL || head->next == NULL){
//             return head;
//         }
        
//         ListNode* smallAns =  reverseList(head->next);
//         ListNode* temp = head->next;
//         temp -> next = head;
//         head->next = NULL;
        
//         return smallAns;
        
//     }
// };

//
//         ListNode *rev = NULL;
//         ListNode *revStart = head;
//         while(revStart){
//             ListNode *temp = revStart;
//             revStart = revStart -> next;
//             temp -> next = rev;
//             rev = temp;
//         }
//         head = rev;
