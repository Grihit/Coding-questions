class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int start = nums.size();
        for(int i=0;i<nums.size();++i)
        {
            if(nums[i]>=0)
            {
                start = i;
                break;
            }
        }
        vector<int> squares;
        int j = start - 1;
        while(start < nums.size() && j >= 0)
        {
            if(nums[j] * nums[j] > nums[start] * nums[start])
            {
                squares.push_back(nums[start]*nums[start]);
                start++;
            }
            else
            {
                squares.push_back(nums[j]*nums[j]);
                j--;
            }
        }
        while(start<nums.size())
        {
            squares.push_back(nums[start]*nums[start]);
            start++;
        }
        while(j >= 0)
        {
            squares.push_back(nums[j]*nums[j]);
            j--;
        }
        return squares;
    }
};
