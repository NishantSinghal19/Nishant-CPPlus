#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout<<" ";
        }
        
        if (i%2!=0)
        {
            for (int j = i; j < 2*n-i; j++)
        {
            if (j%2==0)
            {
                cout<<"*";
            }
            else cout<<" ";
        }
        }
        else{
            for (int j = i; j < 2*n-i; j++)
            {
            if (j%2!=0)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            }
        }
        
        cout<<endl;       
        
    }
    for (int i = n-1; i >= 0; i--)
    {
        for (int k = 0; k < i; k++)
        {
            cout<<" ";
        }
        
        if (i%2!=0)
        {
            for (int j = i; j < 2*n-i; j++)
        {
            if (j%2==0)
            {
                cout<<"*";
            }
            else cout<<" ";
        }
        }
        else{
            for (int j = i; j < 2*n-i; j++)
            {
            if (j%2!=0)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            }
        }
        
        cout<<endl;       
        
    }
    return 0;
}