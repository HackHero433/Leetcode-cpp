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
     TreeNode*ans= NULL;
   TreeNode* searchBST(TreeNode* root, int k) {
        if(root==NULL)
          return {};

         if(root->val==k){
            ans= root;
            return ans;
         } else if(root->val>k){
            searchBST(root->left,k);
         } else{
             searchBST(root->right,k);
         }

         return ans;
    }
};