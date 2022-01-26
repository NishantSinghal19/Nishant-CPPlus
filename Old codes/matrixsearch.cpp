#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    int x;
    cin>>x;
    bool flag=false;
    int r=0,c=m-1;
    while (r<n and c>=0)
    {
        if (a[r][c]==x)
        {
            flag= true;
        }
        if(a[r][c]>0)
        {
            c--;
        }
        else
        {
            r++;
        }
        
    }
    
    if (flag==true)
    {
        cout<<"Element found";
    }
    else
    {
        cout<<"Element is not found";
    }
    
    
    return 0;
}