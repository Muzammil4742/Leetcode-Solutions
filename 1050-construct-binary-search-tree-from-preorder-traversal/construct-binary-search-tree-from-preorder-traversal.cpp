
class Solution {
public:
    TreeNode* helper(vector<int>& preorder, int &i , int range)
    {
        if( i >= preorder.size() || preorder[i] > range)
        {
            return NULL;
        }
        TreeNode* root = new TreeNode(preorder[i]);
        i++;
         root->left = helper( preorder , i ,root->val);
         root->right = helper( preorder , i ,range);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i= 0;
        return helper( preorder , i , INT_MAX );
    }
};