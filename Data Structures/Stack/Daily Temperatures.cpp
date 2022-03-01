class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size());
        stack<pair<int,int>> s;
        s.push(make_pair(temperatures[0],0));
        for(int i=1;i<temperatures.size();++i){
            while(!s.empty()){
                if(s.top().first<temperatures[i]){
                    ans[s.top().second] = i-s.top().second;
                    s.pop();
                }
                else
                    break;
            }
            s.push(make_pair(temperatures[i],i));
        }
        return ans;     
    }
};
