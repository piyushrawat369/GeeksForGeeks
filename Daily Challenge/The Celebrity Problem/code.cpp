
#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:

    int celebrity(vector<vector<int> >& M, int n) 
    {
        int r = 0;
        for (int i = 1; i < n; i++) {
            
            if (M[r][i] == 1) {
                M[r][r] = 1;
                r = i;
            }
            else {
                M[i][i] = 1;
            }
        }
        for (int i = 0; i < n; i++) {
            
            if (M[i][i] == 0) {
                int flag = 0;
                
                for (int j = 0; j < n; j++) {
                    
                    if ((j != i && M[j][i] == 0) || (M[i][j] == 1)) {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                    return i;
            }
        }
        return -1;
        
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
