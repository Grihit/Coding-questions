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
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL)
            return NULL;
        ListNode *temp = head;
        unordered_map<ListNode*,int> hash;
        while(temp -> next != NULL)
        {
            hash[temp]++;
            if(hash[temp]>1)
                return temp;
            temp = temp->next;
        }
        return NULL;
        
    }
};

//O(1) Space Solution
//         if(head==NULL)return NULL;
//         ListNode *slow=head, *fast=head;
//         while(fast!=NULL && fast->next!=NULL)
//         {
//             fast=fast->next->next;
//             slow=slow->next;
//             if(fast==slow)
//             {
//                 slow=head;
//                 while(slow!=fast)
//                 {
//                     slow=slow->next;
//                     fast=fast->next;
//                 }
//                 return fast;
//             }
            
//         }
//         return NULL;
//     }
