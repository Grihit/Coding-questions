class Solution {
public:
    void permuteCal(vector<int>& nums, vector<vector<int>> &res, vector<int> freq, vector<int> temp, int i){
        if(temp.size() == nums.size()){
            res.push_back(temp);
            return;
        }
        if(i == nums.size())
            return;
        while(freq[i] == 1){
            i++;
            if(i == freq.size())
                return;
        }
        freq[i] = 1;
        temp.push_back(nums[i]);
        //cout<<temp.back()<<" ";
        permuteCal(nums, res, freq, temp, 0);
        freq[i] = 0;
        temp.pop_back();
        permuteCal(nums, res, freq, temp, i+1);
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> freq(nums.size(), 0);
        permuteCal(nums, res, freq, {}, 0);
        return res;
    }
};
