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
    if(head==NULL || head->next==NULL)return head;
    ListNode*prev=NULL;
    while(head!=NULL){
        ListNode*front=head->next;
        head->next=prev;
        prev=head;
        head=front;
    }
    return prev;
}

    ListNode* rotateRight(ListNode* head, int k) {
     if(head==NULL || head->next==NULL)return head;

        ListNode*o=head;
        int i=0;
        while(o!=NULL){
            o=o->next;
            i++;
        }
        o=head;
        k=k%i;
if(k==0)return head;
        head=reverse(head);
        ListNode*temp=head;
        for(int i=1;i<k;i++){
 head=head->next;
        }
        ListNode*temp2=head->next;
        o->next=temp;
        head->next=NULL;
        temp=reverse(temp2);
        return temp;
    }
};