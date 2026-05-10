class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int s = students.size();
        int l = sandwiches.size();

        int check = 0;
        int i = 0;

        while (!students.empty() && check < students.size()) {

            // compare FRONT student with current sandwich
            if (students[0] == sandwiches[i]) {

                students.erase(students.begin()); // remove student
                i++;                              // next sandwich
                check = 0;                        // reset failed rotations
            }
            else {

                rotate(students.begin(),
                       students.begin() + 1,
                       students.end());

                check++;
            }
        }

        return students.size();
    }
};