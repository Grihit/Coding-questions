class Solution {
public:
    int max(int a,int b)
    {
        if(a>b)
            return a;
        else
            return b;
    }
    
    int Calculate(vector<int>& nums, unordered_map<int,int>& memo,int n)
    {
        if(memo.find(n) != memo.end()){
            return memo[n];
        }
        if(n==1 || n==0)
            return nums[n];
        if(n<0)
            return 0;
        memo[n] = nums[n] + max(Calculate(nums,memo,n-3), Calculate(nums,memo,n-2));
        return memo[n];
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>memo;
        return max(Calculate(nums,memo,n-1), Calculate(nums,memo,n-2));
    }
};
