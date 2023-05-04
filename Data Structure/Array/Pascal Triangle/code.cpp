//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
// #define ll long long
class Solution{
public:
    int mod=1e9+7;
    void solve(int n,vector<ll> &ans){
        if(n==2){
            ans[0]=1;
            ans[1]=1;
            return;
        }
        vector<ll> temp(n-1);
        solve(n-1,temp);
        ans[0]=1;
        ans[n-1]=1;
        for(int i=0;i<n-2;i++){
            ans[i+1]=(temp[i]+temp[i+1])%mod;
        }
    }
    vector<ll> nthRowOfPascalTriangle(int n) {
        if(n==1) return {1};
        vector<ll> ans(n);
        solve(n,ans);
        return ans;
    }
};


//{ Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends
