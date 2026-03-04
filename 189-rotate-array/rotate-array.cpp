class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        vector<int> temp(n);

        for(int i = 0; i < n; i++) {
            if(i < k)
                temp[i] = nums[n - k + i];
            else
                temp[i] = nums[i - k];
        }

        nums = temp;
    }
};