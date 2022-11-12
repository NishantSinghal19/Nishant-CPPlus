// //{ Driver Code Starts
// //Initial template for C++

// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// //User function template for C++

// class Solution{   
// public:
//     int getPairsCount(int arr[], int n, int k) {
//         int count=0;
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if((arr[i]+arr[j])==k){
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };

// //{ Driver Code Starts.

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, k;
//         cin >> n >> k;
//         int arr[n];
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         Solution ob;
//         auto ans = ob.getPairsCount(arr, n, k);
//         cout << ans << "\n";
//     }
    
//     return 0;
// }
// // } Driver Code Ends

// //Again TLE


//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    void getPairsCount(int arr[], int n, int k) {
        unordered_map<int,int> map;
        int count=0;
        for(int i=0;i<n;i++){
            if(map.find(k-arr[i])!=map.end()){
                count+=map[k-arr[i]];
                cout<<"b:"<<count<<endl;
            }
            map[arr[i]]++;
            cout<<"a:"<<map[arr[i]]<<endl;;
        }
        cout<<"c:" <<count<<"\n";
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.getPairsCount(arr, n, k);

    }
    
    return 0;
}
// } Driver Code Ends