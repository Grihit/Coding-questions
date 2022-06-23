/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         if(head == NULL)
//             return false;
//         ListNode *temp = head;
//         ListNode *temp2 = head;
//         while(true)
//         {
//             temp = temp -> next;
//             if(temp == NULL)
//                 return false;
//             if(temp2 -> next == NULL)
//                 return false;
//             temp2 = temp2 -> next -> next;
//             if(temp2 == NULL)
//                 return false;
//             if(temp == temp2)
//                 return true;
//         }
//         return false;
        
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
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        while(fast && fast->next && fast->next->next){
            fast = fast -> next -> next;
            slow = slow -> next;
            if(fast == slow)
                return true;
        }
        return false;
    }
};

