class Solution {
public:
     void bfs(vector<vector<int>>& image, int sr, int sc, int newColor, int color, map<pair<int,int>, bool>& visited)
     {
         
         if(sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size())
             return;
         if(image[sr][sc] == color && !visited[make_pair(sr,sc)])
         {
             image[sr][sc] = newColor;
             visited[make_pair(sr,sc)] = true;
         }
         else
             return;
         bfs(image, sr+1, sc, newColor, color, visited);
         bfs(image, sr-1, sc, newColor, color, visited);
         bfs(image, sr, sc+1, newColor, color, visited);
         bfs(image, sr, sc-1, newColor, color, visited);
         
     }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int color = image[sr][sc];
        map<pair<int,int>, bool> visited;
        bfs(image, sr, sc, newColor, color, visited);
        return image;
    }
};
