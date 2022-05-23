class Solution {
public:
    int memo[601][101][101] = {};
    //int dp(vector<pair<int,int>>& val, int m, int n, int i, unordered_map<string, int>& memo){
    int dp(vector<pair<int,int>>& val, int m, int n, int i){ 
        //string key = "m" + to_string(m) + "n" + to_string(n) + "i" + to_string(i);
        if(i==val.size() || (m==0 && n==0))
            return 0;
        // if(memo.find(key)!=memo.end())
        //     return memo[key];
        if(memo[i][m][n] != -1)
            return memo[i][m][n];
        if(val[i].first>m || val[i].second>n)
            //return memo[key] = dp(val,m,n,i+1,memo);
            return memo[i][m][n] = dp(val,m,n,i+1);
        // return memo[key] = max(1 + dp(val, m-val[i].first, n-val[i].second, i+1, memo), dp(val, m, n, i+1, memo));
        return memo[i][m][n] = max(1 + dp(val, m-val[i].first, n-val[i].second, i+1), dp(val, m, n, i+1));
    }
    
    int findMaxForm(vector<string>& strs, int m, int n) {
        //unordered_map<string, int> memo;
        memset(memo,-1,sizeof(memo));
        vector<pair<int,int>> val;
        for(int i=0;i<strs.size();++i){
            int n0=0, n1=0;
            for(int j=0;j<strs[i].length();++j){
                if(strs[i][j] == '0')
                    n0++;
                else
                    n1++;
            }
            val.push_back(make_pair(n0,n1));
        }
        //return dp(val, m, n, 0, memo);
        return dp(val, m, n, 0);
    }
};
