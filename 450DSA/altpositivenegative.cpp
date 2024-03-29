//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int> v1 , v2;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0){
	            v1.push_back(arr[i]);
	        }else{
	            v2.push_back(arr[i]);
	        }
	    }
	    int i=0, j=0,k=0;
	    while(i<v1.size() && j<v2.size()){
	        arr[k]=v1[i];
	        k++;i++;
	        arr[k]= v2[j];
	        k++;j++;
	    }
	    while(i< v1.size()){
	        arr[k]=v1[i];
	        k++;i++;
	    }
	    while(j< v2.size()){
	        arr[k]=v2[j];
	        k++;j++;
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
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends