#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    cout<<"abc"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        for (int k = n-i-1; k < n+1+i; k++)
        {
            if (k==n-i||k==n+i)
            {
                cout<<"*";
            }
            else cout<<" ";
            
        }
        cout<<endl;
    }
    for (int i = 0; i < n+1; i++)
    {
        cout<<"* ";
    }
    
    return 0;
}