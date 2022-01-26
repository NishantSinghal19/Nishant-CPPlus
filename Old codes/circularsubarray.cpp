#include <iostream>
#include <bits/stdc++.h>
#include <climits>
using namespace std;
int kaidane(int arr[], int n)
{
    int cs = 0;
    int ms = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cs += arr[i];
        if (cs < 0)
        {
            cs = 0;
        }
        ms = max(ms, cs);
    }

    return ms;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int wrapsum;
    int nonwrapsum;
    nonwrapsum = kaidane(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum += arr[i];
        arr[i] = -arr[i];
    }
    wrapsum = totalsum + kaidane(arr, n);
    cout << wrapsum << endl;
    cout << totalsum << endl;
    cout << kaidane(arr, n) << endl;
    cout << max(wrapsum, nonwrapsum) << endl;
    return 0;
}