class Solution {
public:
    static bool cmp(pair<int,int>& a,pair<int,int>& b){
        //cout<<b.second<<" "<<a.second;
        return a.second>b.second;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        vector<pair<int,int>> smap;
        vector<int> ans;
        for(int i=0;i<nums.size();++i){
            map[nums[i]]++;
        }
        for(auto x: map){
            smap.push_back(x);
            //cout<<x.first<<" "<<x.second;
        }
        sort(smap.begin(),smap.end(),cmp);
        for(int i=0;i<k;++i){
            ans.push_back(smap[i].first);
            //cout<<smap[i].first<<" "<<smap[i].second;
        }
        return ans;
    }
};

//Using Priority Queue
// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         vector<int> res; 
//         unordered_map<int, int> m; 
//         priority_queue<pair<int, int>> pq;  
        
//         for (auto a : nums) m[a]++; 
//         for (auto a : m) {
//             pq.push({a.second, a.first}); 
//         }
        
//         for (int i = 0; i < k; ++i) {
//             res.push_back(pq.top().second);
//             pq.pop(); 
//         }
        
//         return res; 
//     }
// };
