class Solution {
public:
    vector<int> rec(int rowIndex, vector<int>& ans, int i){
        if(i>rowIndex)
            return ans;
        if(i==0)
        {
            ans[0] = 1;
        }
        else if(i==1)
        {
            ans[0] = 1;
            ans[1] = 1;
        }
        else
        {
            vector<int> temp = ans;
            ans[0] = 1;
            for(int j=1;j<temp.size();++j){
                //cout<<temp[j-1]<<" "<<temp[j]<<"\n";
                ans[j] = temp[j-1] + temp[j];
            }
        }
        return rec(rowIndex, ans, i+1);
    }
    
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex+1, 0);
        return rec(rowIndex,ans,0);
    }
};
