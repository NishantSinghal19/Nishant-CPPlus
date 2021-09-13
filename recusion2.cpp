#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int n){
    if(n==1){
        return true;
    }
    bool restarray=sorted(arr+1,n-1);
    return (arr[0]<arr[1]&&restarray);
    
}
void dec(int n){
    if (n==1)
    {
        cout<<"1"<<endl;
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}
void inc(int n){
    if (n==1)
    {
        cout<<"1"<<endl;
        return;
    }
    inc(n-1);
    cout<<n<<endl;
    
}
int firstocc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstocc(arr,n,i+1,key);
}
int lastocc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int restarray=lastocc(arr,n,i+1,key);
    if (restarray!=-1)
    {
        return restarray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
int main(){
    int arr[]={1,3,8,3,6,3,7};
    int n;
    cin>>n;
    //dec(n);
    //inc(n);
    //cout<<firstocc(arr,7,0,3)<<endl;
    cout<<lastocc(arr,7,0,3)<<endl;
    //cout<<sorted(arr,5)<<endl;
    return 0;
}