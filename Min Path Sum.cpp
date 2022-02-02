class Solution {
public:
    int dp(vector<vector<int>>& grid, int i, int j, int memo[][201])
    {
        if(j == grid[0].size()-1 && i == grid.size()-1)
            return grid[grid.size()-1][grid[0].size()-1];
        if(j >= grid[0].size() || i >= grid.size())
            return 10000;
        if(memo[i][j]!=-1)
            return memo[i][j];
        return memo[i][j] = min(grid[i][j] + dp(grid,i+1,j,memo), grid[i][j] + dp(grid,i,j+1,memo));
            
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int memo[201][201];
        memset(memo,-1,sizeof(memo));
        return dp(grid,0,0,memo);
    }
};
