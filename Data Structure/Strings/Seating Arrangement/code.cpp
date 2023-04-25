//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
        
        vector<int>temp = seats;
        int cnt = 0;
        if(temp[0]==0 && temp[1]==0) temp[0] = 1,cnt++;
        for(int i=1;i<m-1;i++)
            if(temp[i-1]==0 && temp[i+1]==0 && temp[i]==0)
                temp[i]=1,cnt++;
        if(temp[m-1]==0 && temp[m-2]==0) cnt++;
        return cnt>=n ? 1:0;
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<int> seats(m);
        for (int i = 0; i < m; i++) {
            cin >> seats[i];
        }
        Solution obj;
        if (obj.is_possible_to_get_seats(n, m, seats)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}

// } Driver Code Ends
