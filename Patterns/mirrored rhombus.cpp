#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for (int i = 0; i < n; i++)
    {
        if (i==0)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<"*";
            }
        }
        else if(i==n-1){
            for (int j = 0; j < n-1; j++)
            {
                cout<<" ";
            }
            
            for (int a = n-1; a < 2*n-1; a++)
            {
                cout<<"*";
            }
            
        }
        else{
            for (int k = 0; k < i; k++)
            {
                cout<<" ";
            }
            for (int l = i; l < n+i; l++)
            {
                if (l==i||l==n+i-1)
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