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
        
        for (int j = n-i-1; j < n+i; j++)
        {
            if (j==n-i-1 || j==n+i-1)
            {
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        
        for (int j = i; j < 2*n+i; j++)
        {
            if (j==i || j==2*n-i-2)
            {
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}