/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* p, TreeNode* q) {
         if(p==NULL && q==NULL)
          return true;
        if(p==NULL || q==NULL)
           return false;
        if(p->val!=q->val)
            return false;

        bool p1=isSymmetric(p->left,q->right);
        bool p2=isSymmetric(p->right,q->left);


         if(p1==true && p2==true)
           return true;
          else
          return false; 
    }

    bool isSymmetric(TreeNode*root){
        return isSymmetric(root->left,root->right);
    }
};