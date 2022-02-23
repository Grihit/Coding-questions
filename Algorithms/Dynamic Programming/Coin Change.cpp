class Solution {
public:
    int dp(vector<int>& coins, int amount,int memo[10001])
    {
        if(amount<0){
            return INT_MIN;
        }
        if(memo[amount]!=0)
            return memo[amount];
        if(amount == 0){
            return 0;
        }
        int min = INT_MAX-1;
        for(int i=0;i<coins.size();++i)
        {
            int remainder = amount - coins[i];
            int val = 1 + dp(coins, remainder,memo);
            if(val > 0)
            {
                //cout<<amount<<":"<<coins[i]<<":"<<val<<" ";
                if(val<min)
                     min = val;
            }
            //cout<<min<<" ";
        }
        return memo[amount] = min;
    }
    
    int coinChange(vector<int>& coins, int amount) {
        int memo[10001];
        memset(memo,0,sizeof(memo));
        if(amount==0)
            return 0;
        int min = dp(coins,amount,memo);
        if(min == INT_MAX-1)
            return -1;
        return min;
    }
};
