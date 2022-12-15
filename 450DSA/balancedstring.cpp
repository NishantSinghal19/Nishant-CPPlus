//{ Driver Code Starts
// Initial template for c++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++

class Solution {
  public:
    string BalancedString(int N) {
        string s;
        int number =N;
        while(N> 26){
            for(int i=0;i<26;i++){
                int a = 97+i;
                s.push_back((char)a);
            }
            N=N-26;
        }
        if(N % 2==0){
            int mid = N/2;
            for(int i =0; i<mid;i++){
                int a=97+i;
                s.push_back((char)a);
            }
            for(int i = 26-mid;i<26;i++){
                int z=97+i;
                s.push_back((char)z);
            }
        } 
        if(N%2==1){
            int x=number;
            int sum=0;
            while (x != 0) {
                sum = sum + x % 10;
                x = x / 10;
            }
            if(sum%2==0){
                int start = (N+1)/2;
                int e = (N-1)/2;
                for(int i =0; i<start;i++){
                    int a=97+i;
                    s.push_back((char)a);
                }
                for(int i = 26-e;i<26;i++){
                    int z=97+i;
                    s.push_back((char)z);
                }
            }else{
                int start = (N-1)/2;
                int e = (N+1)/2;
                for(int i =0; i<start;i++){
                    int a=97+i;
                    s.push_back((char)a);
                }
                for(int i = 26-e;i<26;i++){
                    int z=97+i;
                    s.push_back((char)z);
                }
            }
        }
        return s;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.BalancedString(N) << endl;
    }
    return 0;
}

// } Driver Code Ends