
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size();
        int mid;
        while(low<high)
        {
            mid = (low + high)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
            {
                low = mid + 1;
                mid = low;
            }
            else if(nums[mid]>target)
            {
                high = mid - 1;
                mid = high;
            }
        }
        if(mid == -1)
            mid = 0;
        if(mid == nums.size())
            mid = nums.size()-1;
        if(nums[mid]>=target)
            return mid;
        return mid+1;
    }
};
