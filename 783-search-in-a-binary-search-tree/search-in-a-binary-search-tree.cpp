class Solution {
public:
    TreeNode* searchVal(TreeNode* root, int val)
    {
        if(root == NULL)
        {
            return NULL;
        }

        if(root->val == val)
        {
            return root;
        }

        TreeNode* left = searchVal(root->left, val);
        if(left != NULL)
        {
            return left;
        }

        return searchVal(root->right, val);
    }

    TreeNode* searchBST(TreeNode* root, int val)
    {
        return searchVal(root, val);
    }
};