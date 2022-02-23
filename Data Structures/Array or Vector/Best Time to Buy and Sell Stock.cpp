class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0,lowest = 100001,check;
        for(int i=0;i<prices.size();++i)
        {
            if(prices[i]<lowest)
                lowest = prices[i];
            else
            {
                check = -lowest + prices[i];
                if(check>max)
                    max=check;
            }
        }
        return max;
    }
};
