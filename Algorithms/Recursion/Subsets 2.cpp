class Solution {
public:
    void subsets(vector<int> &nums, vector<vector<int>> &res, int i, vector<int> subset, set<vector<int>> &hash){
        if(i== nums.size())
        {
            //sort(subset.begin(), subset.end());
            if(!hash.count(subset)){
                res.push_back(subset);
                hash.insert(subset);
            }
            return;
        }
        vector<int> newSubset = subset;
        newSubset.push_back(nums[i]);
        subsets(nums,res,i+1,subset,hash);
        subsets(nums,res,i+1,newSubset,hash);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> hash;
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        subsets(nums, res, 0, {}, hash);
        return res;
    }
};
