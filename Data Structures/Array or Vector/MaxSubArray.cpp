class Solution {
public:
    int Max(int a,int b)
    {
        if(a>b)
            return a;
        else
            return b;
    }
    int maxSubArray(vector<int>& nums) {
        int max=nums[0];
        int sum=nums[0];
        for(int i=1;i<nums.size();++i)
        {
            sum=sum+nums[i];
            max=Max(max,sum);
            if(nums[i]>max)
                max=nums[i];
            if(nums[i]>sum)
                sum=nums[i];
        }
        return max;
    }
};
