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
ListNode*reverse(ListNode*head){
        ListNode*prev=NULL,*nxt;
        while(head){
            nxt=head->next;
            head->next=prev;
            prev=head;
            head=nxt;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        head=reverse(head);
        ListNode*c=head;
        int cr=0;
        while(c){
            c->val=(2*c->val+cr);
            cr=c->val/10;
            c->val=c->val%10;
            c=c->next;
        }
        head=reverse(head);
        if(cr){
            ListNode*temp=new ListNode(cr,head);
            head=temp;
        }
        return head;
    }
};