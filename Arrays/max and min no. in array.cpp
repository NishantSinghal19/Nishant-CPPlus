#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    int *arr=new int(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int max = arr[0], min = arr[0], i = 0;
    while (i < n)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }

        i++;
    }
    cout << max << " & " << min;

    return 0;
}