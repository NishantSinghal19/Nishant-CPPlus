#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    cout<<"abc"<<endl;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            cout<<' ';
        }
        for (int k = n-i-1; k < n + i; k++)
        {
            if(i%2==0)cout<<"*";
            else cout<<"-";
        }
        cout<<endl;
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<" ";
        }
        for (int k = i+1; k < 2*(n-1)-i; k++)
        {
            if (n%2!=0)
            {
                if(i%2==0)cout<<"-";
                else cout<<"*";
            }
            else{
                if(i%2==0)cout<<"*";
                else cout<<"-";
            }
        
        }
        cout<<endl;
    }
    
    return 0;
}