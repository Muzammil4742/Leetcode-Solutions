class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        unordered_map<int, int> mp;

        int start = 0;
        int maxLen = 0;

        for (int end = 0; end < n; end++) {
            mp[fruits[end]]++;

            // shrink window if more than 2 types
            while (mp.size() > 2) {
                mp[fruits[start]]--;
                if (mp[fruits[start]] == 0) {
                    mp.erase(fruits[start]);
                }
                start++;
            }

            // update answer
            maxLen = max(maxLen, end - start + 1);
        }

        return maxLen;
    }
};