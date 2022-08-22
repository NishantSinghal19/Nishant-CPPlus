#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    //cout<<"abc"<<endl;
    for (int i = 1; i < n/2; i++)
    {
        for (int j = 0;  j< n/2-i-1; j++)
        {
            cout<<" ";
        }
        for (int k = n/2 -i-1; k < n/2+i; k++)
        {
            cout<<"*";
        }
        for (int l = n/2+i; l <= n-i+2; l++)
        {
            cout<<" ";
        }
        for (int a = n-i+3; a < 2*n-4+i; a++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int k = i; k< 2*n-1-i; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}