//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int count(int coins[], int n, int sum) {

        long long int table[sum+1];
        memset(table, 0, sizeof(table));
        table[0] = 1;
        
        for(int i=0; i<n; i++){
            for(int j = coins[i]; j <= sum; j++){
                table[j] += table[j - coins[i]];
            }
        }
        return table[sum];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends
