class Solution {
public:
    int maxDepth(string s) {
        int ans=0, mx=0;
        for(auto c:s)
        {
            if(c == '(')
            {
                ans++;
            }
            else if(c == ')')
            {
                mx = max(mx,ans);
                ans--;
            }
        }
        return mx;
    }
};