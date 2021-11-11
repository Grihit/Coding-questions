class Solution {
public:
    int minStartValue(vector<int>& nums) {
        for(int i=1;;++i)
        {
            int sum=i;
            for(int j=0;j<nums.size();++j)
            {
                sum = sum + nums[j];
                cout<<sum;
                if(sum<=0)
                    break;
            }
            if(sum>0)
                return i;
                
        }
    }
};
