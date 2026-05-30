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
    int pairSum(ListNode* head) {
        ListNode*s=head,*f=head;
        vector<int>a;
        int i=0;
        while(f){
            a.push_back(s->val);
            s=s->next;
            i++;
            f=f->next;
            if(f)f=f->next;
        }
        i--;
        while(s){
            a[i--]+=s->val;
            s=s->next;
        }
        i=0;
        for(auto k:a)i=max(i,k);
        return i;
    }
};