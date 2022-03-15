class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        queue<pair<int,int>> q;
        map<pair<int,int>,bool> visited;
        int n = 0;
        for(int i=0;i<grid.size();++i)
        {
            for(int j=0;j<grid[0].size();++j)
            {
                pair<int,int> key = {i,j};
                //Checking if the 1 exists and is also not visited
                if(grid[i][j]=='1' && !visited[key])
                {
                    n++;
                    q.push(key);
                    visited[key] = true;
                    //Making all the connected 1's as visited
                    while(!q.empty())
                    {
                        pair<int,int> check = q.front();
                        int k = check.first, l = check.second;
                        if(k!=0)
                        {
                            if(grid[k-1][l]=='1'){
                                pair<int,int> tempKey = {k-1,l};
                                if(!visited[tempKey]){
                                    q.push(tempKey);
                                    visited[tempKey] = true;
                                }
                            }
                        }
                        if(l!=0)
                        {
                            if(grid[k][l-1]=='1'){
                                pair<int,int> tempKey = {k,l-1};
                                if(!visited[tempKey]){
                                    q.push(tempKey);
                                    visited[tempKey] = true;
                                }
                            }
                        }
                        if(k!=grid.size()-1)
                        {
                            if(grid[k+1][l]=='1'){
                                pair<int,int> tempKey = {k+1,l};
                                if(!visited[tempKey]){
                                    q.push(tempKey);
                                    visited[tempKey] = true;
                                }
                            }
                        }
                        if(l!=grid[0].size()-1)
                        {
                            if(grid[k][l+1]=='1'){
                                pair<int,int> tempKey = {k,l+1};
                                if(!visited[tempKey]){
                                    q.push(tempKey);
                                    visited[tempKey] = true;
                                }
                            }
                        }
                        //Without this pop, queue will never be empty
                        q.pop();
                    }
                }
            }
        }
        return n;
    }
};

//Using Recursion
// class Solution {
// public:
//     void bfs(vector<vector<char>>& grid,  vector<vector<int>>& map, int value, int r, int c) {
//         // cout << r << ", " << c << "\n";
//         if (r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size())
//             return;
        
//         if (grid[r][c] == '0')
//             return;
        
//         if (map[r][c] > 0)
//             return;
        
//         map[r][c] = value;
//         bfs(grid, map, value, r-1, c);
//         bfs(grid, map, value, r, c-1);
//         bfs(grid, map, value, r+1, c);
//         bfs(grid, map, value, r, c+1);
//     }
    
//     int numIslands(vector<vector<char>>& grid) {
//         vector<vector<int>> map(grid.size(), vector<int>(grid[0].size(), 0));
        
//         int count = 0;
//         for (int r = 0; r < grid.size(); ++r) {
//             for (int c = 0; c < grid[0].size(); ++c) {
//                 // cout << r << ", " << c << "\n";
//                 if (grid[r][c] == '1' && map[r][c] == 0) {
//                     count++;
//                     bfs(grid, map, count, r, c);
//                 }
//             }
//         }
        
//         return count;
//     }
// };
