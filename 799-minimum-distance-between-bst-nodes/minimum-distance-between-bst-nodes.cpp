class Solution {
public:
    vector<int> result;
    void inorder(TreeNode* root) {
        if (root == nullptr) {
            return;
        }
        inorder(root->left);
        result.push_back(root->val);
        inorder(root->right);
    }
    int minDiff(vector<int>& result) {
        int globalMin = INT_MAX;
        int currDif;
        for (int i = 1; i < result.size(); i++) {
            currDif = result[i] - result[i - 1];
            if (currDif < globalMin) {
                globalMin = currDif;
            }
        }
        return globalMin;
    }

    int minDiffInBST(TreeNode* root) {
        inorder(root);
        return minDiff(result);
    }
};