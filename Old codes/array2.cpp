#include<iostream>
#include<bits/stdc++.h>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int maxnumber=INT_MIN;
    int minnumber=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        maxnumber=max(maxnumber,arr[i]);
        minnumber=min(minnumber,arr[i]);
    }
    cout<<maxnumber<<endl;
    cout<<minnumber<<endl;
    
    return 0;
}