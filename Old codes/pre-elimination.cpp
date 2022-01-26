#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        sort(s, s + n, greater<int>());
        int y= s[k-1],count=0;
        for (int i = k; i < n; i++)
        {
            if (y== s[i])
            {
                count++;
            }
            else
            {
                break;
            }
            
        }
        cout<<k+count<<endl;
        // for (int i = k; i < n; i++)
        // {
        //     if (s[k - 1] != s[i])
        //     {
        //         cout << k << endl;
        //         break;
        //     }
        //     else
        //     {
        //         cout << k + i << endl;
        //     }
        // }
    }

    return 0;
}