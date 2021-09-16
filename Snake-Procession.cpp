#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin >> r;
    while (r--)
    {
        int n;
        cin >> n;
        bool head = false, valid = true;
        char c;
        for (int i = 0; i < n; i++)
        {
            cin >> c;

            if (n == 1 && c != '.')
            {
                valid = false;
            }
            if (c == 'H')
            {
                if (head)
                {
                    valid = false;
                }
                head = true;
            }
            if (c == 'T')
            {
                if (!head)
                {
                    valid = false;
                }
                head = false;
            }
        }
        if (head)
        {
            valid = false;
        }
        if (valid)
        {
            cout << "Valid" << endl;
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }
    return 0;
}