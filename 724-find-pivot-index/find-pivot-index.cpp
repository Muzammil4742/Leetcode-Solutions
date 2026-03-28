class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int pivot = 0;
        int totalSum = 0;
        int leftTotal = 0;
        int rightTotal = 0;
        for(int i =0 ; i< n ; i++)
        {
            totalSum += nums[i];
        }
        for(pivot ; pivot < n ; pivot++)
        {
           
                rightTotal = totalSum - leftTotal - nums[pivot];
                if(leftTotal == rightTotal)
                {
                    return pivot;
                }
                else
                {
                    leftTotal += nums[pivot];
                }

        }
        return -1;
    }
};