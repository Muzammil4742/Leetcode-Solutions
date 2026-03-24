class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int k = p.size();
        int n = s.size();
        if (k > n) {
            return {};
        }
        vector<int> freq1(26, 0), freq2(26, 0);
        vector<int> result;
        for (int i = 0; i < k; i++) {
            freq1[s[i] - 'a']++;
            freq2[p[i] - 'a']++;
        }
        if (freq1 == freq2) {
            result.push_back(0);
        }
        for (int i = k; i < n; i++) {
            freq1[s[i] - 'a']++;
            freq1[s[i - k] - 'a']--;
            if (freq1 == freq2) {
                result.push_back(i - k + 1);
            }
        }

        return result;
    }
};