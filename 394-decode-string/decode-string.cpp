class Solution {
public:
    string decodeString(string s) {
        stack<int> numberStack;
        stack<string> stringStack;
        
        int n = s.size();
        int num = 0;
        string finalString = "";

        for (int i = 0; i < n; i++) {
            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }
            else if (s[i] == '[') {
                numberStack.push(num);
                num = 0;
                stringStack.push("[");
            }
            else if (s[i] == ']') {
                string sampleString = "";
                while (!stringStack.empty() && stringStack.top() != "[") {
                    sampleString = stringStack.top() + sampleString;
                    stringStack.pop();
                }
                stringStack.pop();
                int nTimes = numberStack.top();
                numberStack.pop();
                string finalTemp = "";
                for (int l = 0; l < nTimes; l++) {
                    finalTemp += sampleString;
                }
                stringStack.push(finalTemp);
            }
            else {
                stringStack.push(string(1, s[i]));
            }
        }

        while (!stringStack.empty()) {
            finalString = stringStack.top() + finalString;
            stringStack.pop();
        }

        return finalString;
    }
};