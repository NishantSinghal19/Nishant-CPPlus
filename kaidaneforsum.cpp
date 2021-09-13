#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int cs=0;
    int ms=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cs +=a[i];
        if (cs<0)
        {
            cs=0;
        }
        ms=max(ms,cs);
    }
    
    cout<<ms<<endl;
    return 0;
}