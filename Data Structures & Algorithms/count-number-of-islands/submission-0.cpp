class Solution {
public:
    vector<vector<int>> movement = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
    void dfs(int i, int j, vector<vector<char>>& grid)
    {
        grid[i][j] = '2';
        for(auto x : movement)
        {
            int newI = i+x[0];
            int newJ = j+x[1];
            if(newI < grid.size() && newI >=0 && newJ < grid[0].size() && newJ >= 0 && grid[newI][newJ] == '1')
            {
                dfs(newI, newJ, grid);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for(int i=0; i<grid.size(); i++)
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j] == '1')
                {
                    count++;
                    dfs(i, j, grid);
                }
            }
        
        return count;
    }
};
