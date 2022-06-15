class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<pair<int,int>> zeroes;
        for(int i=0;i<matrix.size();++i){
            for(int j=0;j<matrix[i].size();++j){
                if(matrix[i][j] == 0)
                    zeroes.insert({i,j});
            }
        }
         // for(auto x:zeroes)
         //     cout<<x.first<<" "<<x.second<<endl;
        for(auto x: zeroes){
            for(int j=0;j<matrix[x.first].size();++j)
                matrix[x.first][j] = 0;
            for(int i=0;i<matrix.size();++i)
                matrix[i][x.second] = 0;
        }
    }
};
