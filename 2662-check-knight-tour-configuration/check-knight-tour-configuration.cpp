class Solution {
public:
    bool isValidHelper(vector<vector<int>> grid, int r, int c, int n, int expVal)
    {
        if(r < 0 || c < 0 || r >= n || c >= n || grid[r][c] != expVal)
        {
            return false;
        }
        if(expVal == (n * n) - 1)
        {
            return true;
        }
        // 8 knight moves
        bool ans1 = isValidHelper(grid, r - 2, c + 1, n, expVal + 1);
        bool ans2 = isValidHelper(grid, r - 1, c + 2, n, expVal + 1);
        bool ans3 = isValidHelper(grid, r + 1, c + 2, n, expVal + 1);
        bool ans4 = isValidHelper(grid, r + 2, c + 1, n, expVal + 1);
        bool ans5 = isValidHelper(grid, r + 2, c - 1, n, expVal + 1);
        bool ans6 = isValidHelper(grid, r + 1, c - 2, n, expVal + 1);
        bool ans7 = isValidHelper(grid, r - 1, c - 2, n, expVal + 1);
        bool ans8 = isValidHelper(grid, r - 2, c - 1, n, expVal + 1);

        if(ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8)
        {
            return true;
        }

        return false;
    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        if(grid[0][0] != 0)
        {
            return false;
        }
        return isValidHelper(grid, 0, 0, n, 0);
    }
};