class Solution {
public:
    bool checkMiror(TreeNode* leftRoot , TreeNode* rightRoot)
    {
      if(leftRoot ==  NULL && rightRoot == NULL)
      {
        return true;
      }
      if(leftRoot ==  NULL || rightRoot == NULL)
      {
        return false;
      }
      if(leftRoot->val != rightRoot->val)
      {
        return false;
      }
      return checkMiror(leftRoot->left , rightRoot->right) && checkMiror(leftRoot->right,rightRoot->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
        {
            return true;
        }
        return checkMiror(root->left , root->right);
    }
};