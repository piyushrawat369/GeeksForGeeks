//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int z = 0;
	    while(z<n){
	        if(arr[z] == 0)
	            break;
	        else
	            z++;
	    }
	    
	    int a = z;
	    int b = z+1;
	    for(int i=b; i<n; i++){
	        if(arr[b] != 0){
	            int temp = arr[a];
	            arr[a] = arr[b];
	            arr[b] = temp;
	            a++;
	        }
	        b++;
	    }
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
