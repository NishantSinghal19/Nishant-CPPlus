#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    //Right Triangle Star
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    //Inverted Right Triangle Star
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    //Mirrored Right Triangle Star
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = n; j > n - i - 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    // Inverted Half Pyramid Star
    cout << endl;
    cout << endl;
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = n; j > n - i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    //Full Pyramid Star
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = n; j > n - i - 1; j--)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    //Inverted Full Pyramid Star
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = n; j > n - i; j--)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    //Sqaure Star
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    //Half Diamond Star
    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (i < n)
        {
            for (int j = 0; j < i + 1; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 2 * n - i - 1; j > 0; j--)
            {
                cout << "*";
            }
        }

        cout << endl;
    }
    cout << endl;
    cout << endl;
    //Full Diamond Star
    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (i < n)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << " ";
            }
            for (int j = n; j > n - i - 1; j--)
            {
                cout << "*"
                     << " ";
            }
        }
        else
        {
            for (int j = 2 * n - i; j < n + 1; j++)
            {
                cout << " ";
            }
            for (int j = 2 * n - i - 1; j > 0; j--)
            {
                cout << "*"
                     << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    //V-Shape Star
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            if (j == n - i - 1 || j == n + i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    cout << endl;
    cout << endl;
    //Full Pyramid Star
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            if (!(j <= n - i - 1 || j >= n + i - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    cout << endl;
    cout << endl;
    //Inverted Full Pyramid Star
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            if (!(j <= n - i - 1 || j >= n + i - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    cout << endl;
    cout << endl;
    //Solid Half Inverted Diamond Star
    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (i < n)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << " ";
            }
            for (int j = n; j > n - i - 1; j--)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 2 * n - i; j < n + 1; j++)
            {
                cout << " ";
            }
            for (int j = 2 * n - i - 1; j > 0; j--)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    //Inverted V-Shape Star
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            if (j == n - i - 1 || j == n + i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    cout << endl;
    cout << endl;
    //Hollow Diamond Star
    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (i < n)
        {
            for (int j = 0; j < 2 * n - 1; j++)
            {
                if (j == n - i - 1 || j == n + i - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        else
        {
            for (int j = 0; j < 2 * n - 1; j++)
            {
                if (j == i - n + 1 || j == 2 * n - i + 2)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }

        cout << endl;
    }
    cout << endl;
    cout << endl;
    //Pants Star
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            if ((j <= n - i - 1 || j >= n + i - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    cout << endl;
    cout << endl;
    //Inverted Pants Star
    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            if (j <= n - i - 1 || j >= n + i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    cout << endl;
    cout << endl;
    //Double Pyramid Star
    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (i >= n)
        {
            for (int j = n - 1; j < i + 1; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = n - i; j > 0; j--)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    //Cross Star
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (j == i || j == n - i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    //Hollow Half Pyramid Star
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 0; j < i + 1; j++)
            {
                if (j == 0 || j == i)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    //Hollow Square Star
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0 || j == n - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }

        cout << endl;
    }
    cout << endl;
    cout << endl;
    //Butterfly Shape star
    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (i >= n)
        {
            for (int j = 0; j < 2 * n - 1; j++)
            {
                if ((j <= 2*n-i-2|| j >= i))
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        else
        {
            for (int j = 2*n-2; j>=0; j--)
            {
                if (j <= i || j >= 2*n-i-2)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }

        cout << endl;
    }

    return 0;
}