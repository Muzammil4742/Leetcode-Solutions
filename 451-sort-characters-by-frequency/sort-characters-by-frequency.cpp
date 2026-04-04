class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
        }
        vector<pair<char,int>> vec;
        for(auto it=freq.begin(); it!=freq.end(); it++)
        {
            vec.push_back(*it);
        }
        sort(vec.begin(),vec.end(),cmp);
        string result="";
        for(int i=0 ; i< vec.size() ; i++)
        {
            for(int j=0 ; j<vec[i].second ; j++)
            {
                result += vec[i].first;
            }
        }
        return result;
    }
    static bool cmp(pair<char, int> a, pair<char, int> b) {
        return a.second > b.second;
    }
};