class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        if (p->val > q->val)
            return lowestCommonAncestor(root, q, p);

        if (root == NULL)
            return NULL;

        if (root == p || root == q)
            return root;

        if (root->val < p->val) {
            return lowestCommonAncestor(root->right, p, q);
        }
        else if (root->val > q->val) {
            return lowestCommonAncestor(root->left, p, q);
        }
        else {
            return root;
        }
    }
};