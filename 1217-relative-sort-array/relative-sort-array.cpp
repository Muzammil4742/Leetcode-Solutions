class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> freq;

        // Step 1: Count frequency
        for(int num : arr1) {
            freq[num]++;
        }

        vector<int> result;

        // Step 2: Place elements as per arr2
        for(int num : arr2) {
            while(freq[num] > 0) {
                result.push_back(num);
                freq[num]--;
            }
        }

        // Step 3: Add remaining elements
        vector<int> remaining;
        for(auto &p : freq) {
            while(p.second > 0) {
                remaining.push_back(p.first);
                p.second--;
            }
        }

        sort(remaining.begin(), remaining.end());

        
        result.insert(result.end(), remaining.begin(), remaining.end());

        return result;
    }
};