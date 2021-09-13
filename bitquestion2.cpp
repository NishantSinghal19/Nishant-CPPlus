#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool getbit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int setBit(int n,int pos){
    return (n| (1<<pos));
}
void unique(int arr[],int n){
    int xorsum=0;
    for (int i = 0; i < n; i++)
    {
        xorsum=xorsum^arr[i];
    }
    int tempbit=xorsum;
    int setbit=0;
    int pos=0;
    while (setbit!=1)
    {
        setbit=xorsum &1 ;
        pos++;
        xorsum =xorsum>>1;
    }
    int newxor=0;
    for (int i = 0; i < n; i++)
    {
        if(setBit(arr[i],pos-1)){
            newxor= newxor^arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(tempbit^newxor)<<endl;
    
}
int unique3(int arr[],int n){
    int result=0;
    for (int i = 0; i < 64; i++)
    {
        int sum=0;
        for (int j = 0; j < n; j++)
        {
            if (getbit(arr[j],i))
            {
                sum++;
            }
            
        }
        if (sum%3!=0)
        {
            result=setBit(result,i);
        }
    }
    return result;
}
int main(){
    int arr[]={1,2,3,4,3,2,1,1,2,3};
    cout<<unique3(arr,10);
    return 0;
}