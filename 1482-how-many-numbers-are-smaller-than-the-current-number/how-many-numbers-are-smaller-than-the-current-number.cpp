class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result(nums.size());

        for(int i = 0; i < nums.size(); i++)
        {
            int check = nums[i];
            int k = 0;

            for(int j = 0; j < nums.size(); j++)
            {
                if(nums[j] < check)
                {
                    k++;
                }
            }

            result[i] = k;
        }

        return result;
    }
};