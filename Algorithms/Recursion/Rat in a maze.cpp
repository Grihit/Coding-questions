#include<bits/stdc++.h>
void cal(vector<vector<int> > &maze, int n, int i, int j, vector<vector<int>> &res, unordered_set<int> path){
    if(i == n || j == n || i<0 || j<0)
        return;
    if(path.count((i*n)+j))
        return;
    if(i == (n-1) && j == (n-1)){
        path.insert((n*n)-1);
        vector<int>temp;
        for(int m=0;m<n*n;++m){
            if(path.count(m))
                temp.push_back(1);
            else
                temp.push_back(0);
        }
        res.push_back(temp);
        return;
    }
    if(maze[i][j] == 0){
        return;
    }
    if(maze[i][j] == 1)
        path.insert((i*n)+j);
    cal(maze, n, i, j+1, res, path);
    cal(maze, n, i+1, j, res, path);
    cal(maze, n, i-1, j, res, path);
    cal(maze, n, i, j-1, res, path);
    
}

vector<vector<int> > ratInAMaze(vector<vector<int> > &maze, int n){
  vector<vector<int>> res;
  unordered_set<int>path;
  cal(maze,n,0,0,res,path);
  return res;
}
