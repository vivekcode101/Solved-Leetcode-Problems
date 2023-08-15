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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* left = new ListNode(0);
        ListNode* right = new ListNode(0);
        
        ListNode* leftnode = left;
        ListNode* rightnode = right;
        while(head!=NULL)
        {
            if(head->val<x)
            {
                 leftnode->next=head;
                leftnode=leftnode->next;
                
                
            }
            else
            {
               rightnode->next = head;
                rightnode=rightnode->next;
            }
            head=head->next;
        }
        leftnode->next=right->next;
        rightnode->next=NULL;
        return left->next;
    }
};