class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> a;
        vector<int> b;

        while (root != nullptr || !a.empty()) {

            if (root != nullptr) {
                a.push(root);
                root = root->left;
            }
            else {
                root = a.top();
                a.pop();

                b.push_back(root->val);

                root = root->right;
            }
        }

        return b;
    }
};