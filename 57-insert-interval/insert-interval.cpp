class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {

        bool inserted = false;

        // -----------------------------
        // Step 1: Find first overlapping interval
        // -----------------------------
        for (int i = 0; i < intervals.size(); i++) {

            // Correct overlap condition
            if (newInterval[0] <= intervals[i][1] &&
                newInterval[1] >= intervals[i][0]) {

                intervals[i][0] = min(intervals[i][0], newInterval[0]);
                intervals[i][1] = max(intervals[i][1], newInterval[1]);

                inserted = true;
                break;
            }
        }

        // -----------------------------
        // Step 2: If no overlap, insert
        // -----------------------------
        if (!inserted) {

            int pos = intervals.size();

            for (int i = 0; i < intervals.size(); i++) {
                if (newInterval[0] < intervals[i][0]) {
                    pos = i;
                    break;
                }
            }

            intervals.insert(intervals.begin() + pos, newInterval);
        }

        // -----------------------------
        // Step 3: Merge intervals
        // -----------------------------
        vector<vector<int>> ans;

        if (intervals.empty())
            return ans;

        ans.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); i++) {

            if (intervals[i][0] <= ans.back()[1]) {

                ans.back()[1] = max(ans.back()[1], intervals[i][1]);

            } else {

                ans.push_back(intervals[i]);
            }
        }

        return ans;
    }
};
// 1st condition 
// if the start of new interval is less than the end of any interval than replace the end of that terminal with the end of new interval 
// example 
// [1,3][6,9]
// new interval: [2,5]

// here start of new terminal is less than 3 which is the end of the first terminal
// so replace the end of that terminal with the end of new termina 
// new become: 
// [1,5][6,9]

// 2nd Condition merging 
// after coming next intervals check this 
// if it is greater than the ending of the previous if its true than check its ending with previous ending if current node ending is greater than swap the previous ending with this else skip this we had already covered this 
