//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


#define ll long long int
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
     ll merge(ll arr[], ll l, ll m, ll r)
    {
         // Your code here
         
        ll i = l , j = m+1;
        
        ll a[r-l+1];
        ll cnt = 0;
        ll k = 0;
        
        while(i<= m && j<=r){
            if(arr[i] <= arr[j]) {
                a[k++] = arr[i++];
            }
            else{
                a[k++] = arr[j++];
                cnt = cnt + (m - i + 1);
            }
        }
        
        while(i <= m) a[k++] = arr[i++];
        while(j <= r) a[k++] = arr[j++];
        
        k = 0;
        for(ll x = l; x <= r; x++){
            arr[x] = a[k++];
        }
        
        return cnt;
        
    }
    
    ll mergeSort(ll arr[], ll l, ll r)
    {
        //code here
        
        if(l == r) return 0;
      
        
        ll mid = l + (r-l)/2;
        ll a = mergeSort(arr, l, mid);
        ll b = mergeSort(arr, mid+1, r);
        ll c = merge(arr, l, mid, r);
        
        return c + a + b;
    }
    
    long long int inversionCount(long long arr[], long long n)
    {
        
        ll ans = 0;
        
        ans = mergeSort(arr, 0, n-1);
        
        return ans;
        
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends

//Merge Sort is Used There