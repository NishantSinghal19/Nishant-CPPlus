#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    cout<<"abc"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        for (int k = n; k > n-i-1; k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1 ; j++)
        {
            cout<<" ";
        }
        for (int k = n-1 ;k < 2*n-1-i; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}