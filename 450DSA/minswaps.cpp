//{ Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        // Complet the function
        int totalCnt = 0;
       for(int i = 0; i < n; i++){
           if(arr[i] <= k){
               totalCnt++;
           }
       }
       int currCnt = 0;
       for(int i = 0; i < totalCnt; i++){
            if(arr[i] <= k){
                currCnt++;
            }
       }
       int ans = totalCnt - currCnt;
       for(int i = totalCnt; i < n; i++){
           if(arr[i - totalCnt] <= k){
               currCnt--;
           }
           if(arr[i] <= k){
               currCnt++;
           }
           ans = min(totalCnt - currCnt, ans);
       }
       return ans;
    }
};


//{ Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}

// } Driver Code Ends