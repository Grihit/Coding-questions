class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        if(nums.size()<4)
            return ans;
        sort(nums.begin(),nums.end());
        map<vector<int>, int>check;
        for(int i=0;i<nums.size()-3;++i){
            for(int j=i+1;j<nums.size()-2;++j){
                unordered_map<int,int> hash;
                for(int k=j+1;k<nums.size();++k){
                    long int toFind = ((long int)target - ((long int)nums[i] + (long int)nums[j] + (long int)nums[k]));
                    if(hash.find(toFind) != hash.end()){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(toFind);
                        temp.push_back(nums[k]);
                        check[temp]++;
                        if(check[temp]<=1)
                            ans.push_back(temp);
                    }
                    hash[nums[k]] = k;
                }
            }
        }
        return ans;
    }
};
