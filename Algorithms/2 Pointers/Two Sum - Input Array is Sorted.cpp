class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size()-1, i=0;
        vector<int> ans {0,0};
        for(int k=0;k<numbers.size()-1;++k)
        {
            if(numbers[i] + numbers[n] > target)
                --n;
            else if(numbers[i] + numbers[n] < target)
                ++i;
            else
            {
                //cout<<numbers[i]<<" "<<numbers[n];
                ans[0] = i+1;
                ans[1] = n+1;
                return ans;
            }
        }
        return ans;
    }
};
