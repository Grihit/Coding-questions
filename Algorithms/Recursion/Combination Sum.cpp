class Solution {
public:
    void cal(vector<int>& candidates, int target, int i, vector<vector<int>>& res, vector<int> combination){
        //cout<<candidates[i];
        if(target<0)
            return;
        if(target == 0){
            res.push_back(combination);
            return;
        }
        if(i == candidates.size())
            return;
        //vector<int> newCombination = combination;
        //newCombination.push_back(candidates[i]);
        combination.push_back(candidates[i]);
        cal(candidates, target-candidates[i], i, res, combination);
        combination.pop_back();
        cal(candidates, target, i+1,res,combination);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        cal(candidates,target,0,res,{});
        return res;
    }
};
