//48/50 test cases passed. Time limit exceeded.
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int l = mat.size(), k=mat[0].size();
        vector<vector<int>> ans(l, vector<int> (k,0));
        map<pair<int,int>,int> memo;
        for(int i=0;i<l;++i)
            for(int j=0;j<k;++j)
            {
                if(mat[i][j] == 0){
                    ans[i][j] = 0;
                }
                else
                {
                    //cout<<"yes";
                    queue<pair<int,int>> q;
                    q.push(make_pair(i,j));
                    pair<int,int> check;
                    while(1)
                    {
                        check = q.front();
                        int m = check.first, n = check.second;
                        //cout<<m<<" "<<n;
                        if(mat[m][n] == 0)
                            break;
                        if(m+1 < mat.size())
                            q.push(make_pair(m+1,n));
                        if(m!=0)
                            q.push(make_pair(m-1,n));
                        if(n+1 < mat[0].size())
                            q.push(make_pair(m,n+1));
                        if(n!=0)
                            q.push(make_pair(m,n-1));
                        q.pop();
                    }
                    ans[i][j] = abs(i-check.first) + abs(j-check.second);                  
                }
            }
        return ans;
    }
};
//Slightly faster solution that passes all the test cases
// class Solution {
// public:
//     vector<int> DIR = {0, 1, 0, -1, 0};
//     vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
//         int m = mat.size(), n = mat[0].size();
//         queue<pair<int, int>> q;
//         for (int r = 0; r < m; ++r)
//             for (int c = 0; c < n; ++c)
//                 if (mat[r][c] == 0) q.emplace(r, c);
//                 else mat[r][c] = -1; // Marked as not processed yet!

//         while (!q.empty()) {
//             auto [r, c] = q.front(); q.pop();
//             for (int i = 0; i < 4; ++i) {
//                 int nr = r + DIR[i], nc = c + DIR[i+1];
//                 if (nr < 0 || nr == m || nc < 0 || nc == n || mat[nr][nc] != -1) continue;
//                 mat[nr][nc] = mat[r][c] + 1;
//                 q.emplace(nr, nc);
//             }
//         }
//         return mat;
//     }
// };
