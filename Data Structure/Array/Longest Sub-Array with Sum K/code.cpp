//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, int k) 
    { 
        int maxLength = 0, sum = 0;
        map<long long, int> mp;
        for(int i=0; i<n; i++){
            sum += a[i];
            
            if(sum == k)
                maxLength = max(maxLength, i+1);
            
            int rem = sum - k;
            
            if(mp.find(rem) != mp.end()){
                int len = i - mp[rem];
                maxLength = max(maxLength, len);
            }
            if(mp.find(sum) == mp.end()){
                mp[sum] = i;
            }
        }
        return maxLength;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
