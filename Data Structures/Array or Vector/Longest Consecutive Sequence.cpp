class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<1)
            return 0;
        unordered_set<int> hash;
        for(auto num:nums)
            hash.insert(num);
        int maxCount=1, prevNum = INT_MIN, count=1;
        for(auto num: hash){
            //cout<<prevNum<<" "<<num<<" ";
            if(!hash.count(num - 1)){
                prevNum = num;
                count = 1;
                while(hash.count(prevNum+1)){
                    prevNum++;
                    count++;
                }
                maxCount = max(maxCount,count);
            }
        }
        return maxCount;
    }
};
