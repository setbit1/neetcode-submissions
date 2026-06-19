class Solution {
public:
    void primary_transpose(vector<vector<int>>& matrix)
    {
        int n = matrix.size();
        for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++)
                swap(matrix[i][j], matrix[j][i]);
    }

    void y_mirror(vector<vector<int>>& matrix)
    {
        int n = matrix.size();
        for(int i=0; i<n; i++)
            for(int j=0; j<n/2; j++)
                swap(matrix[i][j], matrix[i][n-j-1]);
    }

    void rotate(vector<vector<int>>& matrix) {
        primary_transpose(matrix);
        y_mirror(matrix);
    }
};
