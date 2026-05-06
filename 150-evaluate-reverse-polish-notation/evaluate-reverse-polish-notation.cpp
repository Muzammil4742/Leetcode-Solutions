class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i = 0; i < tokens.size(); i++) {
            string test = tokens[i];
            if(test == "+" || test == "-" || test == "*" || test == "/") {
                 int num1 = st.top(); 
                st.pop();
                int num2 = st.top(); 
                st.pop();
                int result = 0;
                if(test == "+") result = num2 + num1;
                else if(test == "-") result = num2 - num1;
                else if(test == "*") result = num2 * num1;
                else if(test == "/") result = num2 / num1;
                st.push(result);
            } else {
                 st.push(stoi(test));
            }
        }
        return st.top();
    }
};