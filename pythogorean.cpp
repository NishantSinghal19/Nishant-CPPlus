#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
using namespace std;

bool pyth(int x, int y, int z)
{
    int a,b,c;
    a = max(x , max(y,z)) ;
    
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    if (a * a == b * b + c * c)
        return true;
    return false;
}

int32_t main()
{
    int x, y, z;
    cin >> x>>y>>z;

    if (pyth(x, y, z))
    {
        cout << "Pythogorean Triplet";
    }
    else
    {
        cout << "Not a Pythogorean Triplet";
    }
    return 0;
}