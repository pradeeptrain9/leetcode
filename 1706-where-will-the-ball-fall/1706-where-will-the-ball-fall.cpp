class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int n=grid[0].size();
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++)
        {
            int r=0,c=i;
            while(r<=grid.size() && c<n)
            {
                
                if(grid[r][c]==1)
                {
                    if(c+1==n) break;
                    if(grid[r][c+1]==-1) break;
                    r++;
                    c++;
                }
                else
                {
                    if(c==0) break;
                    if(grid[r][c-1]==1) break;
                    r++;
                    c--;
                }
                if(r==grid.size())
                {
                    ans[i]=c;
                    break;
                }
            }
        }
        return ans;
    }
};