#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int n, int key){
    int s=0;
    int e=n;
    while (s<=e)
    {
        int mid = (s+e)/2;
        if (arr[mid]=key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s= mid +1;
        }
        
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarysearch(arr,n,key);
    
    return 0;
}
// array should be in sortred order for binary search
/* Time complexity of Binary search;
---> after first iteration, length of array - n
---> after second iteration, length of array - n/2
---> after third iteration, length of array - (n/2)/2=n/(2^2)
---> after k iteration, length of array - n/(2^(k-1))
so complexity is O(log2 n)*/
