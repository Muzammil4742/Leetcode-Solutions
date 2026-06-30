class Solution {
public:
    // Find the smallest node in the right subtree
    TreeNode* findMin(TreeNode* root)
    {
        while (root->left != NULL)
        {
            root = root->left;
        }
        return root;
    }

    TreeNode* findNode(TreeNode* root, int key)
    {
        if (root == NULL)
        {
            return NULL;
        }

        // Target is left child
        if (root->left != NULL && root->left->val == key)
        {
            TreeNode* temp = root->left;

            if (temp->left == NULL)
            {
                root->left = temp->right;
                delete temp;
            }
            else if (temp->right == NULL)
            {
                root->left = temp->left;
                delete temp;
            }
            else
            {
                TreeNode* succ = findMin(temp->right);
                temp->val = succ->val;
                temp->right = deleteNode(temp->right, succ->val);
            }

            return root;
        }

        // Target is right child
        if (root->right != NULL && root->right->val == key)
        {
            TreeNode* temp = root->right;

            if (temp->left == NULL)
            {
                root->right = temp->right;
                delete temp;
            }
            else if (temp->right == NULL)
            {
                root->right = temp->left;
                delete temp;
            }
            else
            {
                TreeNode* succ = findMin(temp->right);
                temp->val = succ->val;
                temp->right = deleteNode(temp->right, succ->val);
            }

            return root;
        }

        findNode(root->left, key);
        findNode(root->right, key);

        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key)
    {
        if (root == NULL)
            return NULL;

        // Handle deleting the root itself
        if (root->val == key)
        {
            if (root->left == NULL)
            {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }

            if (root->right == NULL)
            {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }

            TreeNode* succ = findMin(root->right);
            root->val = succ->val;
            root->right = deleteNode(root->right, succ->val);

            return root;
        }

        findNode(root, key);
        return root;
    }
};