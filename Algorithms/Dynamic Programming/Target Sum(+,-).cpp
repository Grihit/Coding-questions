class Solution {
public:
    int dp(vector<int>& nums, int target, int i, map<pair<int,int>, int>& memo){
        //cout<<target<<" ";
        pair<int,int> temp = make_pair(target,i);
        if(memo.find(temp) != memo.end())
            return memo[temp];
        if(target == 0 && i == nums.size())
            return 1;
        if(i == nums.size())
            return 0;
        return memo[temp] = dp(nums, target - nums[i], i+1, memo) + dp(nums, target + nums[i], i+1, memo);
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        map<pair<int,int>, int> memo;
        return dp(nums,target,0,memo);
    }
};
