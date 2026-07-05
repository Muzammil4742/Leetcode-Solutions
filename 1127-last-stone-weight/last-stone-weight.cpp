class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
       sort(stones.begin(), stones.end());
while (stones.size() > 1)
{
    int n = stones.size();
    int largest1st = stones[n - 1];
    int largest2nd = stones[n - 2];
    if (largest1st == largest2nd)
    {
        stones.pop_back();
        stones.pop_back();
    }
    else
    {
        int val = largest1st - largest2nd;
        stones.pop_back();   
        stones.pop_back();   
        stones.push_back(val);
        sort(stones.begin(), stones.end());
    }
}
    if(stones.size() == 0 )
    {
        return 0;
    }
    else
    {
        return stones[0];
    }

    }
};