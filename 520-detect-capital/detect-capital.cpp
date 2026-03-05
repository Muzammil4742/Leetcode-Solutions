class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        int capitalCount = 0;
        for(int i = 0; i < n; i++) {
            if(word[i] >= 'A' && word[i] <= 'Z') {
                capitalCount++;
            }
        }
        if(capitalCount == n) return true;           
        if(capitalCount == 0) return true;           
        if(capitalCount == 1 && word[0] >= 'A' && word[0] <= 'Z')
            return true;                            
        return false;
    }
};