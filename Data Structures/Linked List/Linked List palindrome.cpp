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


//Reverse Linked List Solution

//Using O(1) space and O(n) time
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next)
            return true;
        ListNode* rev = new ListNode(head->val);
        ListNode* temp = head->next, *check = head;
        while(temp)
        {
            ListNode* t = new ListNode(temp->val);
            t->next = rev;
            rev = t;
            temp = temp->next;
        }
        while(check)
        {
            if(check->val != rev->val)
                return false;
            rev = rev->next;
            check= check->next;
        }
        return true;
    }
};
