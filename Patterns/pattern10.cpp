#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"abc"<<endl;
    int n;cin>>n;
    for (int i = 0; i < n+2; i++)
    {
        if (i==0 || i==n+1)
        {
            for (int j = 0; j < n+2; j++)
            {
                if (j==0 || j==n+1)
                {
                    cout<<" ";
                }
                else cout<<"* ";
            }
        }
        else{
            for (int j = 0; j < n+6; j++)
            {
                if (j==0 || j==n+5)
                {
                    cout<<"*";
                }
                else cout<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}