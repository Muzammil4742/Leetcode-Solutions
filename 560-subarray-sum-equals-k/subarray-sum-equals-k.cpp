class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int result = 0;
        int prefixSum = 0;
        unordered_map<int,int> sumCountMap;
        sumCountMap[0] = 1;

        int n = nums.size();

        for(int i = 0; i < n; i++) {
            prefixSum += nums[i];

            if(sumCountMap.find(prefixSum - k) != sumCountMap.end()) {
                result += sumCountMap[prefixSum - k];
            }

            sumCountMap[prefixSum]++;
        }

        return result;
    }
};