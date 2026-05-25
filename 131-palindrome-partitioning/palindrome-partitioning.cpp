class Solution {
public:
    bool isPalindrome(string subString)
    {
        string rev = subString;
         reverse(rev.begin(), rev.end());
        return subString == rev;
    }


    void getAllPartions(string s,vector<vector<string>> &ans,vector<string> &combination)
    {
        if(s.size() == 0)
        {
            ans.push_back(combination);
        }
        for(int i=0 ; i<s.size() ; i++)
        {
            string subString = s.substr(0 , i+1);
            if(isPalindrome(subString))
            {
                combination.push_back(subString);
                getAllPartions(s.substr(i+1),ans,combination);
                combination.pop_back();

            }
        }

    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> combination;
        getAllPartions(s,ans,combination);
        return ans;
    }

};