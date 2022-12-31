class Solution {
    
    void dfs(vector<vector<int>>&grid,int sx,int sy,int count)
    {
        if(sx<0 || sx>n-1 || sy<0 || sy>m-1 || grid[sx][sy]==-1)return;
        if(grid[sx][sy]==2){
            if(emp==count){
                res++;
            }
            return;
        }
        grid[sx][sy]=-1;
        
        dfs(grid,sx+1,sy,1+count);
        dfs(grid,sx-1,sy,1+count);
        dfs(grid,sx,sy+1,1+count);
        dfs(grid,sx,sy-1,1+count);
        
        grid[sx][sy]=0;
        
        return;
    }
    int emp,res=0,n,m;
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        int stx,sty,empty=0;
        n=grid.size();
        m=grid[0].size();
        for( int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    stx=i;sty=j;
                    
                }
                else if(grid[i][j]==0){
                    empty++;
                }
            }
        }
        emp=empty+1;
        dfs(grid,stx,sty,0);
        return res;
    }
};