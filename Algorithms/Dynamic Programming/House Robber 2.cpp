class Solution {
public:
    int Calculate1(vector<int>& nums, unordered_map<int,int>& memo,int n)
    {
        if(n<0)
            return 0;
        //cout<<nums[n]<<" ";
        if(n==1 || n==0)
            return nums[n];
        if(memo.find(n) != memo.end()){
            return memo[n];
        }
        return memo[n] = nums[n] + max(Calculate1(nums,memo,n-3), Calculate1(nums,memo,n-2));
    }
    int Calculate2(vector<int>& nums, unordered_map<int,int>& memo,int n)
    {
        if(n<=0)
            return 0;
        //cout<<nums[n]<<" ";
        if(n==1)
            return nums[n];
        if(memo.find(n) != memo.end()){
            return memo[n];
        }
        return memo[n] = nums[n] + max(Calculate2(nums,memo,n-3), Calculate2(nums,memo,n-2));
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return nums[0];
        if(n==2)
            return max(nums[0], nums[1]);
        unordered_map<int,int>memo1;
        unordered_map<int,int>memo2;
        return max(max(Calculate1(nums,memo1,n-2), Calculate1(nums,memo1,n-3)), max(Calculate2(nums,memo2,n-2), Calculate2(nums,memo2,n-1)));
    }
};
