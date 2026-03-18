class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> last(26);
        for(int i=0 ; i<s.size(); i++)
        {
            last[s[i] - 'a'] = i;
        }
        int size= 0 ; 
        int end= 0 ;
        vector<int> ans;
        for(int i=0 ; i<s.size() ; i++)
        {
            size++;
            end= max(end, last[s[i] - 'a']);
             if (i == end) {  
                ans.push_back(size);
                size = 0;    
            }
        }
        return ans;
    }
};



// we need to store the last index of each character like when last a appear 
// store this in a tabular array you can say 
// then start from 
// the start if the a appear 
// intialize it as starting and tabular index of  as endstring 
// now move next if next character is same move next 
// if different 
// check for the end value fo this character if it less no change 
// if it is greater 
// end string value = this value 


// one its done find the next substring 