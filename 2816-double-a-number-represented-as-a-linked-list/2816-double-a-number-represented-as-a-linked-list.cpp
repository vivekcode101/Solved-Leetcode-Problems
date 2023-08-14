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
    ListNode* reverselist(ListNode* head)
    {
        
       ListNode* curr = head;
       ListNode* frwrd = NULL;
       ListNode* prev = NULL;
        while(curr!=NULL)
        {
            frwrd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = frwrd;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        ListNode* head2 = reverselist(head);
        int carry = 0;
        ListNode* additional = NULL;
        ListNode* temp = head2;
        while(temp!=NULL)
        {
            additional = temp;
            
            int total = 2*temp->val + carry;
            int rem = total%10;
            temp->val = rem;
            carry = total/10;
            temp=temp->next;
        }        
        
        if(carry>0)
        {
           ListNode* carryover = new ListNode(carry);
            additional->next = carryover;
            
        }
        return reverselist(head2);
    }
};