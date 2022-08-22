#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;cin>>n;
    cout<<"abc"<<endl;
    for (int i = 0; i < n/2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j==n/2+i)
            {
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for (int i = 0; i < n/2; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (j==n-i-2)
            {
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}