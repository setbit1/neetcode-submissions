class NumMatrix {
    vector<vector<int>> matrix;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(i == 0 && j == 0)
                    matrix[i][j] = matrix[i][j];
                else if(i == 0)
                    matrix[i][j] += matrix[i][j-1];
                else if(j == 0)
                    matrix[i][j] += matrix[i-1][j];
                else
                    matrix[i][j] += (matrix[i][j-1] + matrix[i-1][j] - matrix[i-1][j-1]);
            }
        }

        this->matrix = matrix;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int upleft = 0, up = 0, left = 0;
        if(row1 > 0 && col1 > 0)
            upleft = matrix[row1-1][col1-1];
        if(row1 > 0)
            up = matrix[row1-1][col2];
        if(col1 > 0)
            left = matrix[row2][col1-1];

        return (matrix[row2][col2] + upleft - up - left);
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */