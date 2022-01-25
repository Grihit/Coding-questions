class Solution {
public:
    int dp(vector<int>& nums, int i,int k,int memo[][2501])
    {
        // if(k==nums.size()-1)
        //     return 0;
        if(i==nums.size())
            return 1;
        if(memo[i][k]!=-1)
            return memo[i][k];
        if(nums[k]<nums[i]){
            //cout<<nums[k]<<" "<<nums[i]<<", ";
            return memo[i][k] = max(1 + dp(nums,i+1,i,memo), dp(nums,i+1,k,memo));
        }
        else
            return memo[i][k] = dp(nums,i+1,k,memo);
    }
    
    int lengthOfLIS(vector<int>& nums) {
        int memo[2501][2501];
        memset(memo,-1,sizeof(memo));
        if(nums.size()==1)
            return 1;
        int max = 1,check;
        for(int i=0;i<nums.size()-1;++i)
        {
            check = dp(nums,i+1,i,memo);
            if(check>max)
                max=check;
        }
        return max;
    }
};
