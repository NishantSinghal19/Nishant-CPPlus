//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            unordered_map <int, int> a;
            unordered_map <int, int> b;
            unordered_map <int, int> c;
            vector <int> ans;
            
            for (int i = 0; i < n1; i++)
                a[A[i]]++;
                
            for (int i = 0; i < n2; i++)
                b[B[i]]++;
                
            for (int i = 0; i < n3; i++)
                c[C[i]]++;
                
            
            for (auto it : a)
            {
                int temp = it.first;
                if (b.find(temp) != b.end() && c.find(temp) != c.end())
                {
                    ans.push_back(temp);
                }
            }
            
            if (ans.size() == 0)
                ans.push_back(-1);
                
            sort (ans.begin(), ans.end());
            return ans;
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends