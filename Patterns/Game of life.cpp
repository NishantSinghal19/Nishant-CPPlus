#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int row= 5;
const int col=5;
int count_live_neighbour_cell(int a[row][col], int r, int c)
{
    int i, j, count = 0;
    for (i = r - 1; i <= r + 1; i++) {
        for (j = c - 1; j <= c + 1; j++) {
            if ((i == r && j == c) || (i < 0 || j < 0)
                || (i >= row || j >= col)) {
                continue;
            }
            if (a[i][j] == 1) {
                count++;
            }
        }
    }
    return count;
}

int main(){
    int a[row][col], b[row][col];
    int i, j;
    int neighbour_live_cell;
    int n;cin>>n;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            a[i][j] = rand() % 2;
        }
    }
 
    cout << "Initial Stage:"<<endl;;
    for (i = 0; i < row; i++) {
        cout << ":";
        for (j = 0; j < col; j++) {
            cout << "  " << a[i][j] << "  :";
        }
        cout<<endl;
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            neighbour_live_cell
                = count_live_neighbour_cell(a, i, j);
            if (a[i][j] == 1
                && (neighbour_live_cell == 2
                    || neighbour_live_cell == 3)) {
                b[i][j] = 1;
            }
 
            else if (a[i][j] == 0
                     && neighbour_live_cell == 3) {
                b[i][j] = 1;
            }
 
            else {
                b[i][j] = 0;
            }
        }
    }
     for (int k = 0; k < n-1; k++)
    {
        cout << "\nNext Generation:"<<endl;;
    for (i = 0; i < row; i++) {
        cout << ":";
        for (j = 0; j < col; j++) {
            cout << "  " << b[i][j] << "  :";
        }
        cout<<endl;
    }
    }
    
    
 
    return 0;
}
