class Solution {
public:
        int Calculate(int m, int n, int i, int j, unordered_map<string,int>& memo, unordered_map<string,int>& map)
    {
        string key = to_string(i) + ',' + to_string(j);
        if(map[key]==1)
            return 0;
        if(memo.find(key) != memo.end())
            return memo[key];
        if(i==m && j==n)
            return 1;
        if(i>m || j>n)
            return 0;
        memo[key]=Calculate(m,n,i+1,j,memo,map) + Calculate(m,n,i,j+1,memo,map);
        return memo[key];
            
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        unordered_map<string,int> memo;
        unordered_map<string,int> map;
        for(int i=0;i<obstacleGrid.size();++i)
        {
            for(int j=0;j<obstacleGrid[i].size();++j)
            {
                if(obstacleGrid[i][j]==1)
                {
                    string obs = to_string(i+1) + ',' + to_string(j+1);
                    map[obs] = 1;
                }
            }
        }
        int sum = Calculate(obstacleGrid.size(),obstacleGrid[0].size(),1,1,memo,map);
        //for(auto x : map)
            //cout<<x.first<<" "<<x.second<<endl;
        return sum;
    }
};
