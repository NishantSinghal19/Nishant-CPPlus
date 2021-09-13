#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    int d, x, y, z;
    while (T--)
    {
        cin >> d >> x >> y >> z;
        int case1 = x * 7;
        int case2 = y * d + z * (7 - d);
        if (case1 > case2)
        {
            cout << case1;
        }
        else
        {
            cout << case2;
        }
    }

    return 0;
}