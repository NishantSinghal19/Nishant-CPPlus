//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        int size = N * N;

        int temp[size];

        int k = 0;

        

        for(int i = 0; i < N; i++)

        {

            for(int j = 0; j < N; j++)

            {

                temp[k] = Mat[i][j];

                k++;

            }

        

        }

        sort(temp, temp+size);

        

        int s = 0;

        for (int i = 0; i < N; i++) 

            for (int j = 0; j < N; j++){ 

                Mat[i][j] = temp[s]; 

                s++;

            }

        return Mat;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
}
// } Driver Code Ends