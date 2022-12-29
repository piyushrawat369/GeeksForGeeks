//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &asteroids) {
         stack<int> s;
         vector<int> ans;
         for(int a: asteroids){
             if(a > 0)
                s.push(a);
             else{
                 while(!s.empty() && s.top() > 0 && s.top() < abs(a)){
                     s.pop();
                 }
                 if(s.empty() || s.top() < 0){
                     s.push(a);
                 }
                 else if(s.top() == abs(a)){
                     s.pop();
                 }
             }
         }
         while(!s.empty()){
             int a = s.top();
             s.pop();
             ans.push_back(a);
         }
         reverse(ans.begin(), ans.end());
         return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
