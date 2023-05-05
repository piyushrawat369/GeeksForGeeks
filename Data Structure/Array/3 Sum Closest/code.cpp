//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int closest3Sum(int A[], int n, int x)
    {
        int minDiff = INT_MAX;
        int ans = 0;
        sort(A, A+n);
        
        for(int i=0; i<n; i++){
            int s = A[i];
            int start = i+1;
            int end = n-1;
            
            while(start < end){
                if(s+A[start]+A[end] == x){
                    return x;
                }
                else if(abs(s+A[start]+A[end] - x) < minDiff){
                    minDiff = abs(s+A[start]+A[end] - x);
                    ans = s+A[start]+A[end];
                }
                if(s+A[start]+A[end] > x){
                    end--;
                }
                else{
                    start++;
                }
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int X;
        cin>>X;
        Solution obj;
        cout<<obj.closest3Sum(Arr, N, X)<<endl;
    }
    return 0;
}
// } Driver Code Ends
