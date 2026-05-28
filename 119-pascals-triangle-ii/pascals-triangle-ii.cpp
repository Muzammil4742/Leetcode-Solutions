class Solution {
public:

    void RowOutput(int i, int rowIndex, vector<int>& row)
    {
        if(i > rowIndex)
        {
            return;
        }

        vector<int> newRow(i + 1);

        newRow[0] = 1;
        newRow[i] = 1;

        for(int k = 1; k < i; k++)
        {
            newRow[k] = row[k-1] + row[k];
        }

        row = newRow;

        RowOutput(i + 1, rowIndex, row);
    }

    vector<int> getRow(int rowIndex) {

        vector<int> row = {1};

        RowOutput(1, rowIndex, row);

        return row;
    }
};