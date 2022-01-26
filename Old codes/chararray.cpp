#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    /*char a[100]="Apple";
    int i=0;
    while (a[i]!= '\0')
    {
        cout<<a[i]<<endl;
        i++;
    }*/
    //PALINDROME
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check=1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=arr[n-1-i])
        {
            check=0;
            break;
        }
        
    }
    if (check==1)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
    
    return 0;
}