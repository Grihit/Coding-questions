class Solution {
public:
    int dp(vector<int>& prices, int i, int bos, unordered_map<string,int>& memo)
    {
        if(i>=prices.size())
            return 0;
        string key = to_string(i) + "," + to_string(bos);
        if(memo.find(key)!=memo.end())
            return memo[key];
        if(bos==0)
            return memo[key] = max(-prices[i] + dp(prices,i+1,1,memo), dp(prices,i+1,0,memo));
        return memo[key] = max(prices[i]+ dp(prices,i+2,0,memo), dp(prices,i+1,1,memo));
    }
    
    int maxProfit(vector<int>& prices) {
        unordered_map<string,int> memo;
        return dp(prices,0,0,memo);
    }
};
