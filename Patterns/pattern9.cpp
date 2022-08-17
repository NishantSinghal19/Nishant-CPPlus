#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout<<"*";
        }
        for (int k = n-i; k <n+i ; k++)
        {
            cout<<" ";
        }
        for (int  l= n-1+i; l < 2*n-1; l++)
        {
            cout<<"*";
        }
    cout<<endl;        
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <i+1; j++)
        {
            cout<<"*";
        }
        for (int k = i+1; k < 2*n-i-1; k++)
        {
            cout<<" ";
        }
        for (int l = 2*n-1; l >= 2*n-1-i; l--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}