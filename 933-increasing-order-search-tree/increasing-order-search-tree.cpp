class Solution {
public:
    TreeNode* New_Root = NULL;
    TreeNode* Current = NULL;

    void searchBST(TreeNode* root)
    {
        if (root == NULL)
        {
            return;
        }

        searchBST(root->left);

        root->left = NULL;

        if (New_Root == NULL)
        {
            New_Root = root;
            Current = root;
        }
        else
        {
            Current->right = root;
            Current = root;
        }

        searchBST(root->right);
    }

    TreeNode* increasingBST(TreeNode* root)
    {
        searchBST(root);
        return New_Root;
    }
};