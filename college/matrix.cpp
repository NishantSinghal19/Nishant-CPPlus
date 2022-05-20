#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    int A[a][b];
    int B[c][d];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int k = 0; k < c; k++)
    {
        for (int l = 0; l < d; l++)
        {
            cin >> B[k][l];
        }
    }

    cout << "Matrice A is : " << endl;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;

    cout << "Matrice B is : " << endl;

    for (int k = 0; k < a; k++)
    {
        for (int l = 0; l < d; l++)
        {
            cout << B[k][l] << " ";
        }
        cout << endl;
    }
    cout<<endl;
    int C[a][d];
    if (b != c)
    {
        cout << "Multiplication is not Possible " << endl;
    }
    else
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < d; j++)
            {
                C[i][j] = 0;
            }
        }    
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < d; j++)
            {
                for (int k = 0; k < b; k++)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        
        cout<< " Multiplication Matrix is : " << endl;
        for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < d; j++)
                {
                    cout<< C[i][j] <<" ";
                }
                cout<< endl;
        }
    }
    return 0;
}