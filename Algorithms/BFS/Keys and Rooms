class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        queue<int> q;
        vector<bool> canVisit (rooms.size(), false);
        map<int, bool> visited;
        q.push(0);
        canVisit[0] = true;
        while(!q.empty())
        {
            int i = q.front();
            if(visited[i] == false)
            {
                visited[i] = true;
                for(int j=0;j<rooms[i].size();++j)
                {
                    if(canVisit[rooms[i][j]] == false)
                    {
                        q.push(rooms[i][j]);
                        canVisit[rooms[i][j]] = true;
                    }
                }
                q.pop();
            }
        }
        for(int i=0;i<rooms.size();++i)
            if(canVisit[i] == false)
                return false;
        return true;
    }
};
