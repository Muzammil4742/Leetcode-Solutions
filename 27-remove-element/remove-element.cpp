class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i = 0;

        while (i < n) {
            if (nums[i] == val) {
                for (int k = i; k < n - 1; k++) {
                    nums[k] = nums[k + 1];
                }
                n--; // reduce size
            } else {
                i++;
            }
        }
        return n;
    }
};