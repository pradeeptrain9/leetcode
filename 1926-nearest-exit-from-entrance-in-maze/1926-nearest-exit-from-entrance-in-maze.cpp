class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int n=maze.size(),m=maze[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        vis[entrance[0]][entrance[1]]=1;
        queue<pair<int,int>>q;
        if(entrance[0]+1<n)
        {
            if(maze[entrance[0]+1][entrance[1]]=='.') q.push({entrance[0]+1,entrance[1]});
        }
        if(entrance[0]-1>=0)
        {
            if(maze[entrance[0]-1][entrance[1]]=='.') q.push({entrance[0]-1,entrance[1]});
        }
        if(entrance[1]+1<m)
        {
            if(maze[entrance[0]][entrance[1]+1]=='.') q.push({entrance[0],entrance[1]+1});
        }
        if(entrance[1]-1>=0)
        {
            if(maze[entrance[0]][entrance[1]-1]=='.') q.push({entrance[0],entrance[1]-1});
        }
        q.push({-1,-1});
        int count=0;
        bool ch=false;
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            if(p.first==-1)
            {
                if(q.empty()) break;
                count++;
                q.push({-1,-1});
                continue;
            }
            if(p.first==0 || p.second==0 || p.first==n-1 || p.second==m-1)
            {
                ch=true;
                break;
            }
            if(p.first+1<n && maze[p.first+1][p.second]=='.')
            {
                if(!vis[p.first+1][p.second])
                {
                    q.push({p.first+1,p.second});
                    vis[p.first+1][p.second]=1;
                }
            }
            if(p.first-1>=0 && maze[p.first-1][p.second]=='.')
            {
                if(!vis[p.first-1][p.second])
                {
                    q.push({p.first-1,p.second});
                    vis[p.first-1][p.second]=1;
                }
            }
            if(p.second+1<m && maze[p.first][p.second+1]=='.')
            {
                if(!vis[p.first][p.second+1])
                {
                    q.push({p.first,p.second+1});
                    vis[p.first][p.second+1]=1;
                }
            }
            if(p.second-1>=0 && maze[p.first][p.second-1]=='.')
            {
                if(!vis[p.first][p.second-1])
                {
                    q.push({p.first,p.second-1});
                    vis[p.first][p.second-1]=1;
                }
            }
        }
        
        return (ch)? count+1:-1;
    }
};