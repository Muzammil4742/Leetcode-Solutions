class Solution {
public:
    void helper(TreeNode* root, int& num, int maxVal)
    {
        if(root == NULL)
        {
            return;
        }

        if(root->val >= maxVal)
        {
            num++;
        }

        maxVal = std::max(maxVal, root->val);

        helper(root->left, num, maxVal);
        helper(root->right, num, maxVal);
    }

    int goodNodes(TreeNode* root) {
        int num = 0;

        helper(root, num, root->val);

        return num;
    }
};