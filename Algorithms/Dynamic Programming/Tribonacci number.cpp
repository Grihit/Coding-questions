class Solution {
public:
    int Calculate(int n,unordered_map<int,int>&memo){
        if(memo.find(n) != memo.end()){
            return memo[n];
        }
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        if(n==2)
            return 1;
        memo[n] = Calculate(n-1,memo) + Calculate(n-2,memo) + Calculate(n-3,memo);
        return memo[n];
    }
    int tribonacci(int n) {
        unordered_map<int,int> memo;
        return Calculate(n,memo);
    }
};
