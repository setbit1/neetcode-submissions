class Solution {
public:
    vector<int> direction = {0, 1, 0, -1, 0};
    void dfs(vector<vector<int>>& grid, int i, int j, int &count)
    {
        grid[i][j] = -1;
        count++;
        for(int k=0; k<4; k++)
        {
            int new_i = i+direction[k];
            int new_j = j+direction[k+1];
            if(new_i >= 0 && new_i < grid.size() && new_j >=0 && new_j < grid[0].size() && grid[new_i][new_j] == 1)
                dfs(grid, new_i, new_j, count);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1){
                    int counter = 0;
                    dfs(grid, i, j, counter);
                    ans = max(ans, counter);
                }
            }
        }
        return ans;
    }
};
