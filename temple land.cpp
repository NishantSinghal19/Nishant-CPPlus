#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin >> s;
    while (s--)
    {
        int n;
        cin >> n;
        int s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        if (n % 2 == 0 || s[0] != 1)
        {
            cout << "no" << endl;
        }
        else
        {
            int mid = (n + 1) / 2;
            bool flag = true;
            for (int i = 0; i < (mid - 1); i++)
            {
                if (s[i + 1] - s[i] != 1)
                {
                    cout << "no" << endl;
                    flag = false;
                    break;
                }
            }
            if (flag == true)
            {
                for (int i = mid; i < n; i++)
                {
                    if (s[i] - s[i - 1] != -1)
                    {
                        cout << "no" << endl;
                        flag = false;
                        break;
                    }
                }
            }
            if (flag == true)
            {
                cout << "yes" << endl;
            }
        }
    }

    return 0;
}