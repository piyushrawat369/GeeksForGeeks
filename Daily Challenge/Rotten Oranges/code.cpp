//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    
    int orangesRotting(vector<vector<int>>& grid) {
        int time=0;
        int n=grid.size(),m=grid[0].size();
        
        queue<vector<int>> q;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {    
                   vector<int> v(3);
                   v[0]=i;v[1]=j,v[2]=time;
                   q.push(v);
                }
            }
        }
        while(!q.empty())
        {
            vector<int> v=q.front();q.pop();
            int i=v[0],j=v[1],t=v[2];
            // cout <<i<< " "<<j<<" "<<t<<endl;
            if(i-1>=0 and i-1<n and  j>=0 and j<m and grid[i-1][j]==1)
            {
                v[0]=i-1;v[1]=j;v[2]=t+1;
                q.push(v);
                grid[i-1][j]=2;
            }
            if(i+1>=0 and i+1<n and  j>=0 and j<m and grid[i+1][j]==1)
            {
                v[0]=i+1;v[1]=j;v[2]=t+1;
                q.push(v);
                grid[i+1][j]=2;
            }
            if(i>=0 and i<n and  j-1>=0 and j-1<m and grid[i][j-1]==1)
            {
                v[0]=i;v[1]=j-1;v[2]=t+1;
                q.push(v);
                grid[i][j-1]=2;
            }
            if(i>=0 and i<n and  j+1>=0 and j+1<m and grid[i][j+1]==1)
            {
                v[0]=i;v[1]=j+1;v[2]=t+1;
                q.push(v);
                grid[i][j+1]=2;
            }
            time=t;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                return -1;
            }
             
        }
        
        return time;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
