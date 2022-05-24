class Solution {
public:
    int calculateLiveNeighbours(vector<vector<int>>& board, int i, int j){
        int num = 0;
        if(i!=0 && board[i-1][j] == 1)
            num++;
        if(j!=0 && board[i][j-1] == 1)
            num++;
        if(i!=board.size()-1 && board[i+1][j] == 1)
            num++;
        if(j!=board[i].size()-1 && board[i][j+1] == 1)
            num++;
        if((i!=0 && j!=0) && board[i-1][j-1] == 1)
            num++;
        if((i!=0 && j!=board[i].size()-1) && board[i-1][j+1] == 1)
            num++;
        if((i!=board.size()-1 && j!=0) && board[i+1][j-1] == 1)
            num++;
        if((i!=board.size()-1 && j!=board[i].size()-1) && board[i+1][j+1] == 1)
            num++;
        return num;
    }
    
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> ans(board.size(), vector<int> (board[0].size(),0));
        for(int i=0;i<board.size();++i){
            for(int j=0;j<board[i].size();++j){
                int num = calculateLiveNeighbours(board,i,j);
                if(board[i][j] == 1){
                    if(num<2)
                        ans[i][j] = 0;
                    else if(num == 2 || num == 3)
                        ans[i][j] = 1;
                    else
                        ans[i][j] = 0;
                }
                else{
                    if(num == 3)
                        ans[i][j] = 1;
                }
            }
        }
        board = ans;
    }
};
