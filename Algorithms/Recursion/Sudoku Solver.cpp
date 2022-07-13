class Solution {
public:
    bool isValid(char num, int row, int col, vector<vector<char>> &board){
        //Row and col check
        for(int i=0;i<9;++i){
            if(board[i][col] == num) return false;
            if(board[row][i] == num) return false;
            if(board[3*(row/3)+i/3][3*(col/3)+i%3] == num) return false;
        }
        return true;
    }
    
    bool cal(vector<vector<char>>& board){
        for(int i=0;i<board.size();++i){
            for(int j=0;j<board[0].size();++j){
                if(board[i][j] == '.'){
                    for(char c = '1'; c<='9';++c){
                        if(isValid(c, i, j, board)){
                            board[i][j] = c;
                            if(cal(board))
                                return true;
                            else
                                board[i][j] = '.';
                        }
                    }
                    return false;
                }    
            }
        }
        return true;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        cal(board);
    }
};
