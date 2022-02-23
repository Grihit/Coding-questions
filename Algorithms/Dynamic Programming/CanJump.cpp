class Solution {
public:
    bool Calculate(vector<int>& nums,int n,unordered_map<int,bool>& memo){
        bool check;
        if(memo.find(n) != memo.end()){
            return false;
        }
        if(n==nums.size()-1){
            return true;
        }
        if(n>=nums.size())
            return false;
        if(nums[n]==0)
        {
            memo[n]=false;
            return false;
        }
        for(int i=1;i<=nums[n];++i)
        {
            if(memo.find(n+i) != memo.end()){
                i=i+nums[n+i];
            }
            check=Calculate(nums,n+i,memo);
            if(check==true)
                return check;
        }
        memo[n] = check;
        return memo[n];
        
            
    }
    
    bool canJump(vector<int>& nums) {
        int n=0;
        unordered_map<int,bool> memo;
        bool check = Calculate(nums,n,memo);
        for(auto x:memo)
            cout<<x.first<<" "<<x.second<<endl;
        return check;
    }
};
