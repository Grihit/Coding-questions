class Solution {
public:
    int Calculate(int n,unordered_map<int,int>&memo)
    {
        if(memo.find(n) != memo.end()){
            return memo[n];
        }
        if(n==0)
            return 1;
        if(n<0)
            return 0;
        memo[n] = Calculate(n-1,memo) + Calculate(n-2,memo);
        return memo[n];
    }
    
    int climbStairs(int n) {
        unordered_map<int,int> memo;
        return Calculate(n,memo);
    }
};
