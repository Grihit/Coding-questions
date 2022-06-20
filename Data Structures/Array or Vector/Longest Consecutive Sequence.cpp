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
            if(hash.find(num - 1) == hash.end()){
                prevNum = num;
                count = 1;
                while(hash.find(prevNum+1)!=hash.end()){
                    prevNum++;
                    count++;
                }
                maxCount = max(maxCount,count);
            }
        }
        return maxCount;
    }
};
