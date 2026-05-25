class Solution {
public:

    set<vector<int>> ss;

    void getAllCombination(vector<int>& arr,
                           int idx,
                           int target,
                           vector<vector<int>>& ans,
                           vector<int>& combination)
    {
        // target achieved
        if(target == 0)
        {
            if(ss.find(combination) == ss.end())
            {
                ans.push_back(combination);
                ss.insert(combination);
            }
            return;
        }

        // invalid case
        if(idx == arr.size() || target < 0)
        {
            return;
        }

        combination.push_back(arr[idx]);

        // single take
        getAllCombination(arr, idx + 1,
                          target - arr[idx],
                          ans, combination);

        // multiple take
        getAllCombination(arr, idx,
                          target - arr[idx],
                          ans, combination);

        combination.pop_back();

        // exclude
        getAllCombination(arr, idx + 1,
                          target,
                          ans, combination);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {

        vector<vector<int>> ans;
        vector<int> combination;

        getAllCombination(arr, 0, target, ans, combination);

        return ans;
    }
};