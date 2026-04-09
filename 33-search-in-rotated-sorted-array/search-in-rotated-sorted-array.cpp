class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int k = 3; // rotation amount

        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                return i;
            }
        }
        return -1;
    }
};
// first we need to left  rotate the array by 3 indices 
// then we need to check for the element and and its location 
// or 
// // first check for the occuranse if it occurs than 
// // we need to check for just index by using thing  formula 
// // result index  - 3 
// // if result < 0 than result + nums.size(); retyrn result 
// else if result >= 0  than return result 