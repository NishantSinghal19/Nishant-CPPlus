#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    for (int i = 0; i < n; i++)
    {
        if (i==0)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<"* ";
            }
            
        }
        else{
            for (int j = 0; j <n/2+1; j++)
            {
                if (j==n/2)
                {
                    cout<<"*";
                }
                else cout<<"  ";
            }
            
        }
        cout<<endl;
    }
    
    return 0;
}