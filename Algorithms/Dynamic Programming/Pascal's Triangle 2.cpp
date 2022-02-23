class Solution {
public:
    vector<vector<int>> Calculate(int n,vector<vector<int>> &sol,int numRows)
    {
        if(n>numRows)
            return sol;
        vector<int> temp(n,1);
        for(int i=0;i<n-2;++i)
            temp[i+1]=sol[n-2][i] + sol[n-2][i+1];
        sol.push_back(temp);
        return Calculate(n+1, sol, numRows);        
    }
    
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> sol;
        vector<int> temp = {1};
        vector<int> temp2 = {1,1};
        sol.push_back(temp);
        sol.push_back(temp2);
        vector<vector<int>> pt = Calculate(3,sol,rowIndex+1);
        vector<int> ans(pt[rowIndex].size(),0);
        for(int i=0;i<pt[rowIndex].size();++i)
            ans[i]=pt[rowIndex][i];
        return ans;
    }
};
