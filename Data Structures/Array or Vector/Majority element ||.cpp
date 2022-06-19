class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int num1=0,num2=0,c1=0,c2=0;
        for(auto num: nums){
            if(num == num1)
                c1++;
            else if(num == num2)
                c2++;
            else if(c1 == 0){
                num1 = num;
                c1++;
            }
            else if(c2 == 0){
                num2 = num;
                c2++;
            }
            else{
                c1--;
                c2--;
            }
        }
        int count1 = 0, count2 = 0;
        for(auto num: nums){
            if(num == num1)
                count1++;
            else if(num == num2)
                count2++;
        }
        vector<int> ans;
        if(count1 > nums.size()/3)
            ans.push_back(num1);
        if(count2 > nums.size()/3)
            ans.push_back(num2);
        return ans;
    }
};
