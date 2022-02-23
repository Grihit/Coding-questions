class Solution {
public:
    int Calculate(int m, int n, int i, int j, unordered_map<string,int>& memo)
    {
        string key = to_string(i) + ',' + to_string(j);
        if(memo.find(key) != memo.end())
            return memo[key];
        if(i==m && j==n)
            return 1;
        if(i>m || j>n)
            return 0;
        memo[key]=Calculate(m,n,i+1,j,memo) + Calculate(m,n,i,j+1,memo);
        return memo[key];
            
    }
    
    int uniquePaths(int m, int n) {
        unordered_map<string,int> memo;
        int sum = Calculate(m,n,1,1,memo);
        //for(auto x : memo)
            //cout<<x.first<<" "<<x.second<<endl;
        return sum;
    }
};
