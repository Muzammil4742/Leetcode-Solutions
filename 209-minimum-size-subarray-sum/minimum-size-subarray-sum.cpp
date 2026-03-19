class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minLen = INT_MAX;        // fixed
        int currentSum = 0;
        int low = 0;
        int high = 0;

        while(high < nums.size()) {
            currentSum += nums[high];
            high++;

            while(currentSum >= target) {
                int currentWindow = high - low;
                minLen = min(minLen, currentWindow);  // fixed
                currentSum -= nums[low];
                low++;
            }
        }

        if(minLen == INT_MAX) {   // fixed
            return 0;
        }
        return minLen;
    }
};