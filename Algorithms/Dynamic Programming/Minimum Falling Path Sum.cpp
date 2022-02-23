class Solution {
public:
    int min(int a, int b, int c)
    {
        if(a<=b && a<=c)
            return a;
        if(b<=a && b<=c)
            return b;
        else
            return c;
    }
    
    int dp(vector<vector<int>>& grid, int i, int j, unordered_map<string,int>& memo)
    {
        //cout<<i<<" "<<j<<",";
        if(j >= grid[0].size() || i >= grid.size() || j<0 || i<0)
            return 10000;
        if(i == grid.size()-1)
            return grid[grid.size()-1][j];
        string key = to_string(i) + "," + to_string(j);
        if(memo.find(key) != memo.end())
            return memo[key];
        return memo[key] = min(grid[i][j] + dp(grid,i+1,j-1,memo), grid[i][j] + dp(grid,i+1,j,memo), grid[i][j] + dp(grid,i+1,j+1,memo));
    }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        unordered_map<string,int> memo;
        int min = INT_MAX;
        for(int j=0;j<matrix[0].size();++j)
        {
            int val = dp(matrix,0,j,memo);
            if(val<min)
                min = val;
        }
        return min;
        
    }
};
