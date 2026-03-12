class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> mp;

        // store allowed characters
        for(char c : allowed){
            mp.insert(c);
        }

        int count = 0;

        for(string word : words){
            bool valid = true;

            for(char c : word){
                if(mp.find(c) == mp.end()){
                    valid = false;
                    break;
                }
            }

            if(valid) count++;
        }

        return count;
    }
};