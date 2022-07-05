class Solution {
public:
    void comSum(vector<int>& candidates, int target, vector<vector<int>>& res, vector<int> temp, int i){
        if(target == 0){
            res.push_back(temp);
            return;
        }
        if(target < 0)
            return;
        if(i==candidates.size())
            return;
        temp.push_back(candidates[i]);
        comSum(candidates, target - candidates[i], res, temp, i+1);
        temp.pop_back();
        int num = candidates[i];
        while(i<candidates.size() && candidates[i] == num)
            i++;
        comSum(candidates, target, res, temp, i);
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        sort(candidates.begin(), candidates.end());
        comSum(candidates, target, res, {}, 0);
        return res;
    }
};
