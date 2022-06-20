// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> sol;
//         for(int i=0;i<nums.size();++i)
//         {
//             for(int j=i+1;j<nums.size();++j)
//             {
//                 if(nums[i] + nums[j] == target)
//                 {
//                     sol.push_back(i);
//                     sol.push_back(j);
//                     goto x;
//                 }
//             }
//         }
//         x:
//         return sol;
//     }
// };

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int, int> hash;
        for(int i=0;i<nums.size();++i){
            if(hash.find(target - nums[i])!=hash.end()){
                ans.push_back(hash[target - nums[i]]);
                ans.push_back(i);
                return ans;
            }
            hash[nums[i]] = i;
        }
        return ans;
        
    }
};
