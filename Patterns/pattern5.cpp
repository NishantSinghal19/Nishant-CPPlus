#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    for (int i = 0; i < n/2 +1; i++)
    {
        for (int j = 0; j < n-2*i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for (int i = 0; i < n/2 +1; i++)
    {
        for (int j = 0; j < n-2*i-1; j++)
        {
            cout<<" ";
        }
        for (int k = n-1; k >= n-2*i-1; k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}