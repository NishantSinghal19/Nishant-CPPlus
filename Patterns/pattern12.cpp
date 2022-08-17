#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    cout<<"abc"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==0 || i==n-1)
            {
                if (j==0 ||j ==n-1)
                {
                    cout<<"  ";
                }
                else cout<<"* ";
            }
            else cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}