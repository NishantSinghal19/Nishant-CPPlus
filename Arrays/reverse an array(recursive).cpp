#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reversearrayrecursive(int arr[],int start,int end){
    if(start>=end)
    return;

    int temp= arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    reversearrayrecursive(arr,start+1,end-1);
}
int main(){
    int n; cin>>n;
    int *arr = new int(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    reversearrayrecursive(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}