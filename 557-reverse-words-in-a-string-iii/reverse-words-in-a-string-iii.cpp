class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        int start = 0;
        for (int end = 0; end < s.length(); end++) {
            if (s[end] == ' ') { 
                for (int i = end - 1; i >= start; i--) {
                    result += s[i];
                }
                result += ' ';
                start = end + 1;
            }
        }
        for (int i = s.length() - 1; i >= start; i--) {
            result += s[i];
        }
        return result;
    }
};