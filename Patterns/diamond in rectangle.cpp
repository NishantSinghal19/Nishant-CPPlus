#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        for (int j = n-1; j >= i; j--)
        {
            cout<<'*';
        }
        for (int k = n-i; k < n; k++)
        {
            cout<<' ';
        }
        for(int l= n+i;l>n;l--){
            cout<<' ';
        }
        for(int a=n+i;a<2*n;a++){
            cout<<'*';
        }
        cout<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<i+1;j++){
            cout<<'*';
        }
        for(int k=n-1;k>i;k--){
            cout<<' ';
        }
        for (int l = n; l < 2*n-1-i; l++)
        {
            cout<<' ';
        }
        for (int a = 2*n-1-i; a < 2*n; a++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    
    return 0;
}