class Solution {
public:

    TreeNode* helper(vector<int>& nums, int st, int en)
    {
        if(st > en)
        {
            return nullptr;
        }

        int mid = st + (en - st) / 2;

        TreeNode* root = new TreeNode(nums[mid]);

        root->left = helper(nums, st, mid - 1);
        root->right = helper(nums, mid + 1, en);

        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums, 0, nums.size() - 1);
    }
};