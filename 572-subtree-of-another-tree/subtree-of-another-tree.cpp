class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode *q)
    {
        if( p == NULL && q == NULL)
        {
            return true;
        }
        if( p ==  NULL || q == NULL)
        {
            return false;
        }
        if( p->val == q->val)
        {
            return isSameTree(p->left,q->left) && isSameTree(p->right ,q-> right);
        }
        return false;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL || subRoot == NULL)
        {
            return root == subRoot;
        }
        if(root->val == subRoot->val)
        {
            if(isSameTree(root,subRoot))
            {
                return true;
            }
        }
          return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }
};