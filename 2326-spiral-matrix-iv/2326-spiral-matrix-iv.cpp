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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>a(m,vector<int>(n,-1));
        int tr=0,br=m-1,lc=0,rc=n-1;
    while(head){
for(int i=lc;i<=rc && head;i++){
    a[tr][i]=head->val;
    head=head->next;
}
tr++;
for(int i=tr;i<=br&&head;i++){
    a[i][rc]=head->val;
    head=head->next;
}
rc--;
for(int i=rc;i>=lc&&head;i--){
    a[br][i]=head->val;
    head=head->next;
}
br--;
for(int i=br;i>=tr&&head;i--){
    a[i][lc]=head->val;
    head=head->next;
}
lc++;
    }
    return a;
    }
};