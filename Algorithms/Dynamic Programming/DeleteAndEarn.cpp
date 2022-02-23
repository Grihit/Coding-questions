class Solution {
public:
     int max(int a,int b)
    {
        if(a>b)
            return a;
        else
            return b;
    }
    
    int Calculate(vector<int>& num, unordered_map<int,int>& memo,int n)
    {
        if(memo.find(n) != memo.end()){
            return memo[n];
        }
        if(n==1 || n==0)
            return num[n];
        if(n<0)
            return 0;
        memo[n] = num[n] + max(Calculate(num,memo,n-3), Calculate(num,memo,n-2));
        return memo[n];
    }
    
    
    int deleteAndEarn(vector<int>& nums) {
        int n=10001;
        vector<int> buckets(n,0);
        for(int i=0;i<nums.size();++i)
            buckets[nums[i]]=buckets[nums[i]]+nums[i];
        cout<<buckets[3];
        unordered_map<int,int>memo;
        return max(Calculate(buckets,memo,n-1), Calculate(buckets,memo,n-2));
    }
};
