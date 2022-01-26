#include <bits/stdc++.h>
using namespace std;

vector<int> find(int arr[], int n, int x)
{
    vector<int> ans;
    int first = -1, last = -1,i=0;
    while (i < n)
    {
        if (arr[i] == x)
        {
            if (first == -1)
            {
                first = i;
                last = i;
            }
            else
            {
                last = i;
            }
        }

        i++;
    }
    ans.push_back(first);
    ans.push_back(last);
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n], i;
        for (i = 0; i < n; i++)
            cin >> arr[i];
        vector<int> ans;
        ans = find(arr, n, x);
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
