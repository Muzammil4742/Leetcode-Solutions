class Solution {
public:
    TreeNode* invertHelper(TreeNode* root, TreeNode* newRoot)
    {
        if(root == NULL)
        {
            return NULL;
        }
        if(root->right != NULL)
        {
            newRoot->left = new TreeNode(root->right->val);
            invertHelper(root->right, newRoot->left);
        }
        if(root->left != NULL)
        {
            newRoot->right = new TreeNode(root->left->val);
            invertHelper(root->left, newRoot->right);
        }
        return newRoot;
    }

    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL)
        {
            return NULL;
        }

        TreeNode* newRoot = new TreeNode(root->val);
        return invertHelper(root, newRoot);
    }
};