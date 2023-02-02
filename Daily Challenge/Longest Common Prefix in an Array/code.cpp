//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int n)
    {
        int s = arr[0].size();
        for(int i=1; i<n; i++){
            int x = arr[i].size();
            s = min(s, x);
        }
        
        string ans = "";
        for(int i=0; i<s; i++){
            char ch = arr[0][i];
            int count = 0;
            
            for(int j=1; j<n; j++){
                if(ch == arr[j][i])
                    count++;
                else 
                    break;
            }
            if(count == n-1)
                ans += ch;
        }
        if(ans == "") return "-1";
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
