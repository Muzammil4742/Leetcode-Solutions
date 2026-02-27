
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;

        int n = s.length();
        vector<string> rows;
        rows.resize(numRows);

        int step = 1;
        int row = 0;

        for (int i = 0; i < n; i++) {
            char arr = s[i];
            rows[row] = rows[row] + arr;

            if (row == 0) {
                step = 1;
            }
            else if (row == numRows - 1) {
                step = -1;
            }

            row = row + step;
        }

        string result = "";
        for (int i = 0; i < numRows; i++) {
            result = result + rows[i];
        }

        return result;
    }
};



        // if (numRows == 1) return s;

        // int n = s.length();
        // vector<vector<char>> grid(numRows, vector<char>(n, ' '));

        // int i = 0; 
        // int col = 0;

        // while (i < n) {
            
        //     for (int row = 0; row < numRows && i < n; row++) {
        //         grid[row][col] = s[i++];
        //     }
        //     col++;

            
        //     for (int row = numRows - 2; row > 0 && i < n; row--) {
        //         grid[row][col] = s[i++];
        //         col++;
        //     }
        // }

        // string result = "";
        // for (int row = 0; row < numRows; row++) {
        //     for (int c = 0; c < n; c++) {
        //         if (grid[row][c] != ' ') {
        //             result += grid[row][c];
        //         }
        //     }
        // }

        // return result;
