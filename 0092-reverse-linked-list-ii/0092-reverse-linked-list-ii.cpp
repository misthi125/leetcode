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
    ListNode*reverse(ListNode*head,int r){
        if(!(--r))return head;
        ListNode*t=head->next;
        ListNode*n=reverse(t,r);
        t->next=head;
        head->next=NULL;
        return n;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode*r,*l=new ListNode(0,head),*i=l;
        int k=right-left+1;
        left--;
        right=right-left-1;
        while(left--)l=l->next;
        r=l->next;
        while(right--)r=r->next;
        if(r->next)r=r->next;
        else r=NULL;
        ListNode*t=reverse(l->next,k);
        l->next->next=r;
        l->next=t;
        return i->next;
    }
};