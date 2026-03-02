class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int l = s.length();
        int start= 0;
        int end= l-1;
         int start_ascii = 0;
          int end_ascii = 0;
        for(int i=0 ; i< l/2 ; i++)
        {
             start_ascii = static_cast<int>(s[start]);
          end_ascii = static_cast<int>(s[end]);
            if(s[start]!=s[end])
            {
                if(start_ascii >end_ascii )
                {
                    s[start]=s[end];
                }
                else
                {
                    s[end]=s[start];
                }
            }
            start++;
            end--;
        }
        return s;
    }
};

