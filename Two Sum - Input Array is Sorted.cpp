class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size()-1;
        int i=0;
        vector<int> ans;
        for(int k=0;k<numbers.size()-1;++k)
        {
            if(numbers[i] + numbers[n] > target)
                n--;
            else if(numbers[i] + numbers[n] < target)
                i++;
            else
            {
                //cout<<numbers[i]<<" "<<numbers[n];
                ans.push_back(i+1);
                ans.push_back(n+1);
                break;
            }
        }
        return ans;
    }
};
