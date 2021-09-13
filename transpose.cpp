#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
        
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    /*for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int temp = a[i][j];
            a[i][j]=a[j][i];
            a[j][i]= temp;

        }
        
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<"\n";
    }*/
    
    
    return 0;
}