class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> unique;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();++i){
            int toFind = 0 - nums[i];
            unordered_map<int,int> hash;
            for(int j=i+1;j<nums.size();++j){
                vector<int> temp;
                int newToFind = toFind - nums[j];
                if(hash.find(newToFind)!=hash.end()){
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[hash[newToFind]]);
                    
                    if(!(unique.find(temp)!=unique.end())){
                        ans.push_back(temp);
                        unique.insert(temp);
                    }
                }
                else
                    hash[nums[j]] = j;
            }
        }
        //sort(ans.begin(),ans.end());
        return ans;
    }
};
