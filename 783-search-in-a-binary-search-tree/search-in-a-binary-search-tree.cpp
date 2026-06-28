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
        else if(val < root->val)
        {
            return searchVal(root->left, val);
        }
        else
        {
            return searchVal(root->right, val);
        }
    }

    TreeNode* searchBST(TreeNode* root, int val)
    {
        return searchVal(root, val);
    }
};