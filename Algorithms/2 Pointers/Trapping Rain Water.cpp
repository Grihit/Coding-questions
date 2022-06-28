class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size()-1, count = 0, maxHeight = 0;
        while(left<right){
            if(height[left]<=height[right])
            {
                //cout<<height[left]<<" ";
                maxHeight = height[left];
                while(height[left]<=height[right] && left<right){
                    if(height[left] < maxHeight)
                        count += maxHeight - height[left];
                    maxHeight = max(maxHeight, height[left]);
                    left++;
                }
            }
            else{
                maxHeight = height[right];
                while(height[right] < height[left] && left<right){
                    if(height[right] < maxHeight)
                        count += maxHeight - height[right];
                    maxHeight = max(maxHeight, height[right]);
                    right--;
                }
            }
        }
        return count;
    }
};
