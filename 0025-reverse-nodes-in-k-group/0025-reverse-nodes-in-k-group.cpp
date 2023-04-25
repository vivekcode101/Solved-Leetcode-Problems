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
    ListNode* reverseKGroup(ListNode* head, int k) {
         if(head==NULL)
    {
        return NULL;
    }
    ListNode*curr=head;
    ListNode*next=NULL;
    ListNode*prev=NULL;
    int cnt=0;
    while(curr!=NULL && cnt<k)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        cnt++;
    }
   
        if (cnt < k) {
        curr = prev;
        prev = NULL;
        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
         if(next!=NULL)
    {
        head->next=reverseKGroup(next,k);
    }
    return prev;
    // ListNode* temp = NULL;
    // ListNode* tail = head;
    // while (tail->next != curr && tail->next!=NULL) {
    //     temp = tail;
    //     tail = tail->next;
    // }
    // tail->next = reverseKGroup(curr, k);
    // return prev;
        
    }
   

       
};