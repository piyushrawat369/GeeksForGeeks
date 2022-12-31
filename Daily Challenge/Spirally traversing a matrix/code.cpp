//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int m, int n) 
    {
        int i, k = 0, l = 0;
        vector<int> a;
     
        while (k < m && l < n) {
            for (i = l; i < n; ++i) {
                a.push_back(matrix[k][i]);
            }
            k++;
    
            for (i = k; i < m; ++i) {
                a.push_back(matrix[i][n-1]);
            }
            n--;
     
            if (k < m) {
                for (i = n - 1; i >= l; --i) {
                    a.push_back(matrix[m-1][i]);
                }
                m--;
            }
     
            if (l < n) {
                for (i = m - 1; i >= k; --i) {
                    a.push_back(matrix[i][l]);
                }
                l++;
            }
        }
        return a;
    }
        
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
