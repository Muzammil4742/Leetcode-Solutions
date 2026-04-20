class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n = nums2.size();
        int l = nums1.size();

        for(int i = 0; i < l; i++) {
            int check = nums1[i];
            int nextGreater = -1;

            for(int j = 0; j < n; j++) {
                if(check == nums2[j]) {
                    for(int k = j + 1; k < n; k++) {
                        if(nums2[k] > check) {
                            nextGreater = nums2[k];
                            break;
                        }
                    }
                    break;
                }
            }

            ans.push_back(nextGreater);
        }

        return ans;
    }
};