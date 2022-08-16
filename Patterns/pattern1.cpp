#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int k = n-1; k >= i; k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-2; j++)
        {
            cout<<" ";
        }
        for (int k = n; k > n-i-2; k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}