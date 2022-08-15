#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    for (int i = 0; i < n/2+1; i++)
    {
        if (i==0)
        {
            int j=0;
            while (j<n)
            {
                cout<<"* ";
                j++;
            }
            
        }else{
        for (int k = 0; k < n/2+1; k++)
        {
            if (k==0 || k==i)
            {
                cout<<"* ";
            }
            else cout<<"  ";
        }
        for (int l = i; l < n-i-1; l++)
        {
            cout<<"- ";
        }
        for (int a = n-1; a < n-i-1; a++)
        {
            if (a==n-1 || a==n-i-1)
            {
                cout<<"*";
            }
            else cout<<" ";
        }
        }
        cout<<endl;
    }
    // for (int i = n/2; i > 0; i--)
    // {
    //     if (i== n/2 -1)
    //     {
    //         int j=0;
    //         while (j<n)
    //         {
    //             cout<<"*";j--;
    //         }
            
    //     }
    //     for (int k = 0; k < n; k++)
    //     {
    //         if ((k==0 || k==n-1)||(k=i||k==n-i-1))
    //         {
    //             cout<<"*";
    //         }
    //         else cout<<" ";
    //     }
    //     cout<<endl;
    // }
    
    return 0;
}