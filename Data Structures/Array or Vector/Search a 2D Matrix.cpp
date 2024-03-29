class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=1;
        for(i=1;i<matrix.size();++i){
            if(matrix[i][0] == target)
                return true;
            if(matrix[i][0] > target)
                break;
        }
        i--;
        for(int j=0;j<matrix[i].size();++j){
            if(matrix[i][j] == target)
                return true;
        }
        return false;
    }
};
