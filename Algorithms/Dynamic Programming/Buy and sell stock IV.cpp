class Solution {
public:
    int dp(int k, vector<int>& prices, int i, int bos, unordered_map<string,int>& memo)
    {
        if(k==0)
            return 0;
        if(i==prices.size())
            return 0;
        string key = to_string(k) + "," + to_string(i) + "," + to_string(bos);
        if(memo.find(key)!=memo.end())
            return memo[key];
        if(bos==0)
            return memo[key] = max(-prices[i] + dp(k,prices,i+1,1,memo), dp(k,prices,i+1,0,memo));
        return memo[key] = max(prices[i]+ dp(k-1,prices,i+1,0,memo), dp(k,prices,i+1,1,memo));
    }
    
    int maxProfit(int k, vector<int>& prices) {
        unordered_map<string,int> memo;
        return dp(k,prices,0,0,memo);
    }
};
