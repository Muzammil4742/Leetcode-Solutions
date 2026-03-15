class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(), people.end());

        int start = 0;
        int end = n - 1;
        int boat = 0;

        while(start <= end)
        {
            if(start == end)
            {
                boat++;
                break;
            }

            if((people[start] + people[end]) <= limit)
            {
                boat++;
                start++;
                end--;
            }
            else
            {
                boat++;
                end--;
            }
        }
        return boat;
    }
};