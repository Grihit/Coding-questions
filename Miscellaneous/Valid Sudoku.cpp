class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //cout<<int('9');
        //row check
        for(int i=0;i<9;++i){
            unordered_set<char> hash;
            for(int j=0;j<9;++j){
                if(int(board[i][j]) >= 49 && int(board[i][j]) <=57){
                    if(hash.find(board[i][j]) != hash.end())
                        return false;
                    hash.insert(board[i][j]);
                }
            }
        }
        
        //col check
        for(int i=0;i<9;++i){
            unordered_set<char> hash;
            for(int j=0;j<9;++j){
                if(int(board[j][i]) >= 49 && int(board[j][i]) <=57){
                    if(hash.find(board[j][i]) != hash.end())
                        return false;
                    hash.insert(board[j][i]);
                }
            }
        }
        
        //grid check
        for(int i=0;i<9;++i){
            int j,n;
            if(i<3)
                j=0;
            else if(i<6)
                j=3;
            else
                j=6;
            n=(i%3)*3;
            unordered_set<char> hash;
            for(int k=0;k<3;++k){
                for(int m=0;m<3;++m){
                    if(int(board[k+j][m+n]) >= 49 && int(board[k+j][m+n]) <=57){
                        if(hash.find(board[k+j][m+n]) != hash.end())
                            return false;
                        hash.insert(board[k+j][m+n]);
                    } 
                }
            }
        }
        return true;
    }
};
