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

    void fun(TreeNode* root, int sum, vector<int>& diary,
             int targetSum, vector<vector<int>>& res) {

        if (root == NULL)
            return;

        sum = sum + root->val;
        diary.push_back(root->val);

        // Check only at leaf node
        if (root->left == NULL && root->right == NULL) {
            if (sum == targetSum) {
                res.push_back(diary);
            }
        }

        fun(root->left, sum, diary, targetSum, res);
        fun(root->right, sum, diary, targetSum, res);

        // Backtracking
        diary.pop_back();
    }


    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

        vector<vector<int>> res;
        vector<int> diary;

        fun(root, 0, diary, targetSum, res);

        return res;
    }
};