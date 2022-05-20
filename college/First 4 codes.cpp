#include <iostream>
using namespace std;

void Swap(int a, int b)
{
    int temp;
    temp = b;
    b = a;
    a = temp;
    cout << "Ater Swapping : " << a << " " << b << endl;
}

void fibonicci_Series(int n)
{
    int c = 0;
    int d = 1;
    int e;
    cout << c << " " << d << " ";

    for (int i = 2; i < n; i++)
    {
        e = c + d;
        c = d;
        d = e;

        cout << e << " ";
    }
    cout << endl;
}

int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}

string palindrome(string h)
{
    for (int i = 0; i < h.length() / 2; i++) {
        if (h[i] != h[h.length() - i - 1]) {
            return "Given String is Not a palindrome";
        }
    }
    return "Given String Is a palindrome";
}
int main()
{
   int a, b;

    cout << "Before Swapping : ";
    cin >> a >> b;
    Swap(a, b);
    cout << endl;

    int f;
    cout << "Enter the Number Upto Which Series Is to be Print : ";
    cin >> f;
    fibonicci_Series(f);
    cout << endl;

    int g;
    cout << "Enter the Number whose factorial is to be found : ";
    cin >> g;
    cout << "Factorial of " << g << " is : " << factorial(g);
    cout << endl;
    cout << endl;

    string h;
    cout << "Enter the String : ";
    cin >> h;
    cout<<palindrome(h);
    
    return 0;
}