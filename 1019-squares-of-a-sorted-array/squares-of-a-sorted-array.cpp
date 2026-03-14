class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();      
        for(int i = 0; i < n; i++) {
            nums[i] = nums[i] * nums[i];
        }
        bool swapped;
        do {
            swapped = false;
            int k = 0;
            int j = n - 1;

            for(int i = 0; i < n / 2; i++) {
                if(nums[k] > nums[k + 1]) {
                    swap(nums[k], nums[k + 1]);
                    swapped = true;
                }
                if(nums[j] < nums[j - 1]) {
                    swap(nums[j], nums[j - 1]);
                    swapped = true;
                }
                k++;
                j--;
            }
        } while(swapped);

        return nums;
    }
};
