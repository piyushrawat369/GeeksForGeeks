//{ Driver Code Starts
// Program to find best buying and selling days
#include <bits/stdc++.h>

using namespace std;

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int *, int);

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, i;
        cin >> n;
        int price[n];
        for (i = 0; i < n; i++) cin >> price[i];
        // function call
        stockBuySell(price, n);
    }
    return 0;
}

// } Driver Code Ends


// User function template for C++

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int price[], int n) {
    int profit = 0;
    int start = 0;
    for(int i=0; i<n-1; i++){
        if(price[i] < price[i+1] && start == 0){
            cout<<"("<<i<<" ";
            start  = 1;
            profit = 1;
        }
        else if(price[i] > price[i+1] && start == 1){
            cout<<i<<")"<<" ";
            start = 0;
        }
        
    }
    if(profit == 0){
        cout<<"No Profit"<<" ";
    }
    if(start == 1){
        cout<<n-1<<")"<<" ";
    }cout<<endl;
    
}
