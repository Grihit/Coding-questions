class Solution {
public:
    int MAX(int a,int b)
    {
        if(a>b)
            return a;
        else
            return b;
    }
    
    
    int dp(vector<int>& nums, vector<int>& multipliers,int left,int i, unordered_map<string,int>& memo)
    {
        string key = to_string(left) + ',' + to_string(i);
        if(memo.find(key) != memo.end())
            return memo[key];
        
        if(i == multipliers.size())
            return 0;
        
        int multi = multipliers[i];
        int right = nums.size()-1-(i-left);
        return memo[key] = MAX(nums[left]*multi + dp(nums,multipliers,left+1,i+1,memo), nums[right]*multi + dp(nums,multipliers,left,i+1,memo));
    }
    
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        unordered_map<string,int> memo;
        return dp(nums,multipliers,0,0,memo);
    }
};
