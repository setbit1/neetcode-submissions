class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9][9] = {false};
        int column[9][9] = {false};
        int box[9][9] = {false};

        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                char c = board[i][j];
                if(c == '.')
                    continue;
                int num = c - '0' - 1;
                int k = i/3*3 + j/3;

                if(row[i][num] || column[j][num] || box[k][num])
                    return false;

                row[i][num] = true;
                column[j][num] = true;
                box[k][num] = true;
            }
        }
        return true;
    }
};
