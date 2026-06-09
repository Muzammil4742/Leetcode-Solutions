
class Solution {
public:
    TreeNode* NextRoot;
    void flatten(TreeNode* root) {
        if( root ==  NULL)
        {
            return ;
        }
        flatten(root->right);
        flatten(root->left);

        root->left = NULL;
        root->right = NextRoot;
        NextRoot = root;
    }
};