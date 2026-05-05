class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string temp="";
        for(int i=0 ; i< path.size();i++)
        {
            if(path[i] == '/')
            {
                if(temp == "" || temp ==".")
                {

                }
                else if(temp == "..")
                {
                    if(!st.empty())
                    {
                        st.pop();
                    }
                }
                else
                {
                    st.push(temp);
                }
                temp="";
            }
            else
            {
                temp += path[i];
            }
        }
        if(temp == "..") {
            if(!st.empty()) st.pop();
        }
        else if(temp != "" && temp != ".") {
            st.push(temp);
        }
        vector<string>result;
        while(!st.empty())
        {
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin() , result.end());
        string answer ="";
        for(string dir : result)
        {
            answer += "/" + dir;
        }
        
        return answer == "" ? "/" : answer;
    }
};