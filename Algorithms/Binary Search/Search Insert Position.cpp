class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        while(high>=low)
        {
            int mid = low + (high - low)/2;
            if(nums[mid] == target)
                return mid;
            if(nums[mid]>target)
                high = mid - 1;
            if(nums[mid]<target)
                low = mid + 1;
        }
        return high + 1;;
    }
};
