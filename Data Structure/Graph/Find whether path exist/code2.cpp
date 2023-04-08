
class Solution
{
private:
    bool dfs(int srow,int scol,vector<vector<int>> &grid,vector<vector<int>> &vis){
        vis[srow][scol] = 1;
        
        int n = grid.size();
        int m = grid[0].size();
                
        int delrow[] = {-1,0,+1,0};
        int delcol[] = {0,-1,0,+1};
        
        for(int i=0;i<4;i++){
            int nrow = srow + delrow[i];
            int ncol = scol + delcol[i];
            
            if(nrow>=0 and nrow<n and ncol>=0 and ncol<m and ncol>=0 and vis[nrow][ncol]==0){
                if(grid[nrow][ncol]==3){
                    if(dfs(nrow,ncol,grid,vis)==true) return true;;
                }
                else if(grid[nrow][ncol]==2){
                    return true;
                }
            }
        }
        
        return false;
    }
    
public:
    bool is_Possible(vector<vector<int>>& grid)
    {
        int sourcerow = 0;
        int sourcecol = 0;
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> vis(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    sourcerow = i;
                    sourcecol = j;
                }
            }
        }    
        
        bool answer = dfs(sourcerow,sourcecol,grid,vis);
        
        return answer;
    }
};
