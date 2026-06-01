
class Solution {
    int res = 0;
public:
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return res;        
    }
private:
    int dfs(TreeNode* root) {
        if (!root) {
            return 0;
        }
        int left = dfs(root->left);
        int right = dfs(root->right);
        res = max(res, left + right);
        return 1 +max(left, right);
    }    
};