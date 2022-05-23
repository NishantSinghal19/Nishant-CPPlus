class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++){
            int n= arr.size();
            int contribution = ceil((i+1)*(n-i)/2.0);
            sum+=(contribution*arr[i]); 
        }
        return sum;
    }
};

//The ceil() function in C++ returns the smallest possible integer value which is greater than or equal to the given argument.

// Example
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
  
//   // find the smallest possible integer value >= 15.08   
//   cout << ceil(15.08);

//   return 0;
// }

// // Output: 16