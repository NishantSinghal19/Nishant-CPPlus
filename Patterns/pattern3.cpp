#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    for (int i = 0; i < n/2 +1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int k = i; k < n-i; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = 0; i < n/2; i++)
    {
        for (int j = 0; j < n/2 +1; j++)
        {
            cout<<" ";
            if (j==(n/2-1))
            {
                cout<<"*";
            }
            
        }
        cout<<endl;
    }
    
    return 0;
}