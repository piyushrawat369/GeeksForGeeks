//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
private:
    bool dfs(int i, int j, vector<vector<int>>& grid){
        if(i<0 || i >= grid.size() || j<0 || j >= grid[0].size() || grid[i][j] == 0)  return false;
        if(grid[i][j] == 2) return true;
        grid[i][j] = 0;
        return dfs(i-1, j, grid) || dfs(i+1, j, grid) || dfs(i, j-1, grid) || dfs(i, j+1, grid);
    }
    
public:
    bool is_Possible(vector<vector<int>>& grid)
    {
        int i=0, j=0;
        int n = grid.size(), m = grid[0].size();
        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                if(grid[i][j] == 1){
                    break;
                }
            }
            if(grid[i][j] == 1){
                break;
            }
        }
        return dfs(i, j, grid);
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}
// } Driver Code Ends
