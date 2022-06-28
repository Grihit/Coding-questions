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
                    maxHeight = max(maxHeight, height[left]);
                    count += maxHeight - height[left];
                    left++;
                }
            }
            else{
                maxHeight = height[right];
                while(height[right] < height[left] && left<right){   
                    maxHeight = max(maxHeight, height[right]);
                    count += maxHeight - height[right];
                    right--;
                }
            }
        }
        return count;
    }
};
