class Solution {
public:
    vector<vector<string>> res;
    bool isValid(int row, int col, vector<string> &board){
        for(int i=row;i>=0;--i)
            if(board[i][col] == 'Q') return false;
        for(int i=row, j=col;i>=0 && j>=0;i--,j--)
            if(board[i][j] == 'Q') return false;
        for(int i=row,j=col;i>=0&&j<board.size();--i,++j)
            if(board[i][j] == 'Q') return false;
        return true;
    }
    
    void cal(vector<string> &board, int row){
        if(row == board.size()){
            res.push_back(board);
            return;
        }
        for(int i=0;i<board.size();++i){
            if(isValid(row, i, board)){
                board[row][i] = 'Q';
                cal(board,row+1);
                board[row][i] = '.';
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n,'.'));
        cal(board, 0);
        return res;
    }
};
