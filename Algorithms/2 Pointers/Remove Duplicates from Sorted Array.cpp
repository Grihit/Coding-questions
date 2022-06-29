class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 0, right = 1;
        for(right = 1;right<nums.size();++right){
            if(nums[left] != nums[right])
                nums[++left] = nums[right];
        }
        return left+1;
    }
};
