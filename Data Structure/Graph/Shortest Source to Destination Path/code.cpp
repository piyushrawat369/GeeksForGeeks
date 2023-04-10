//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        if(A[0][0] == 0){
            return -1;
        }
        queue<pair<int,pair<int,int>>> q;
        vector<vector<int>> dist(N, vector<int>(M, INT_MAX));
        dist[0][0]=0;
        q.push({0, {0,0}});
        
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};

        while(!q.empty()){
            auto it=q.front();
            q.pop();
            int steps = it.first;
            int row = it.second.first;
            int col = it.second.second;
            for(int i=0; i<4; i++){
                int newr = row+dr[i];
                int newc = col+dc[i];
                if(newr>=0 && newc>=0 && newr<N && newc<M && A[newr][newc]==1 && steps+1<dist[newr][newc]>0){
                    dist[newr][newc] = steps+1;
                    if(newr==X && newc==Y){
                        return dist[newr][newc];
                    }
                    else{
                        q.push({steps+1, {newr,newc}});
                    }
                }
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends
