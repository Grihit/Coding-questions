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
    bool isPalindrome(ListNode* head) {
        int n=1;
        ListNode* temp = head;
        for(int i=0;temp->next!=NULL;i++)
        {
            n++;
            temp = temp->next;
        }
        if(n==1)
            return true;
        else{
            ListNode* temp2 = head;
            int arr[n/2];
            for(int i=0;i<n/2;++i)
            {
                arr[i] = temp2->val;
                temp2 = temp2->next;
            }
            if(n%2!=0)
                temp2 = temp2->next;
            for(int i=(n/2)-1;i>=0;--i)
            {
                if(arr[i]!=temp2->val)
                    return false;
                temp2 = temp2->next;
            }
            return true;
        }
    }
};
