class Solution {
public:
    bool flipEquiv(TreeNode* p, TreeNode* q) {

        if (p == NULL && q == NULL)
            return true;

        if (p == NULL || q == NULL)
            return false;

        if (p->val != q->val)
            return false;

        bool noFlip =
            flipEquiv(p->left, q->left) &&
            flipEquiv(p->right, q->right);

        bool flip =
            flipEquiv(p->left, q->right) &&
            flipEquiv(p->right, q->left);

        return noFlip || flip;
    }
};