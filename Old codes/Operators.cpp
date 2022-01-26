#include <iostream>
using namespace std;
int main()
{
    int i = 1, j = 20, k;
    k = ++i - i-- + ++j - j--;
    cout << i << j << endl
         << k;
    return 0;
}