
#include<bits/stdc++.h>
using namespace std;


long long maxArea(long long A[], int len)
{
    int a = 0;
    int b = len - 1;
    long long area = 0;
    
    while(a < b){
        area = max(area, min(A[a], A[b])*(b-a));
        
        if(A[a] < A[b])
            a++;
        else
            b--;
    }
    return area;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}
