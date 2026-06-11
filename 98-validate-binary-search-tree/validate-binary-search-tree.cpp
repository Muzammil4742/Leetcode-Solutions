class Solution {
public:
    bool helper(TreeNode* root, TreeNode* mn, TreeNode* mx) {
        if (root == nullptr) {
            return true;
        }
        if (mn != nullptr && root->val <= mn->val) {
            return false;
        }
        if (mx != nullptr && root->val >= mx->val) {
            return false;
        }
        return helper(root->left, mn, root) &&
               helper(root->right, root, mx);
    }

    bool isValidBST(TreeNode* root) {
        return helper(root, nullptr, nullptr);
    }
};