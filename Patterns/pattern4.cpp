#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j==0 || j==i)
            {
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (j==0 || j==n-i-2)
            {
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}