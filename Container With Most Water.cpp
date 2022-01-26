class Solution {
public:
    int min(int a, int b)
    {
        if(a<b)
            return a;
        else 
            return b;
    }
    
    int Calculate(vector<int>& height,int& max, int l1, int b, int l2)
    {
        if(l1>=height.size()-1)
            return max;
        if(l2>=height.size())
            return Calculate(height, max, l1+1,1,l1+2);
        int sum = min(height[l1],height[l2]) * b;
        //cout<<b<<" "<<min(height[l1],height[l2])<<" next";
        if(sum>max)
            max = sum;
        max = Calculate(height, max, l1, b+1, l2+1);
        return max;
            
        
    }
    
    int maxArea(vector<int>& height) {
        int max = 0,l1 = 0, b = 1, l2=1;
        max = Calculate(height, max, l1, b, l2);
        return max;
    }
};

