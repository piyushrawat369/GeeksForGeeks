//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minLaptops(int N, int start[], int end[]) {
        sort(start, start+N);
        sort(end, end+N);
        
        int i = 0;
        int j = 0;
        int total = 0;
        int maxi = 0;
        while(i < N && j < N){
            if(start[i] < end[j]){
                i++;
                total++;
            }
            else{
                j++;
                total--;
            }
            maxi = max(maxi, total);
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int start[N], end[N];
        for(int i=0; i<N; i++)
            cin>>start[i];
        for(int i=0; i<N; i++)
            cin>>end[i];
            
        Solution ob;
        cout << ob.minLaptops(N, start, end) << endl;
    }
}
// } Driver Code Ends
