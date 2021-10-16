class Solution {
public:
    int min(int a,int b)
    {
        if(a<b)
            return a;
        else
            return b;
    }
    
    int Calculate(vector<int>& cost,int n,unordered_map<int,int>& memo){
        if(memo.find(n) != memo.end()){
            return memo[n];
        }
        if(n<0)
            return 0;
        if(n==0|| n==1)
            return cost[n];
        memo[n] =cost[n] + min(Calculate(cost,n-1,memo), Calculate(cost,n-2,memo));
        return memo[n];
            
            
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        unordered_map<int,int> memo;
        return min(Calculate(cost,n-1,memo), Calculate(cost,n-2,memo));
    }
};
