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
        if(head==NULL)return head;
        ListNode*temp=head;
        for(int i=1;i<k;i++){
            temp=temp->next;
        if(temp==NULL&&i<k)return head;
}
        ListNode*nextHead=reverseKGroup(temp->next,k);
        temp->next=NULL;
        ListNode*prev=NULL;
        ListNode*curr=head;
        while(curr!=NULL){
            ListNode*front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
head->next=nextHead;
return prev;
    }
};