class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int n=nums.size();
        vector<int>mini(n,0);
        
        vector<int>maxi(n,0);

        int gre=nums[0];
        for(int i=0;i<n;i++){
            gre=max(gre,nums[i]);

            maxi[i]=gre;
        }

        int sma=nums[n-1];
        for(int i=n-1;i>=0;i--){
            sma=min(sma,nums[i]);
            mini[i]=sma;
        }

        for(int i=0;i<n;i++){
            int ma=maxi[i];
            int mi=mini[i];

            int score=ma-mi;

            if(score<=k)return i;

            
        }

        return -1;
    }
};