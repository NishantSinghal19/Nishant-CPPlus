#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int tillingways(int n){
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    return tillingways(n-1)+tillingways(n-2);
    
}

int friendspairing(int n){
    if (n==0 || n==1 || n==2)
    {
        return n;
    }
    return friendspairing(n-1)+ friendspairing(n-2)*(n-1);
}
int knapsack(int value[],int wt[],int n,int W){
    if (n==0 || W==0)
    {
        return 0;
    }
    if (wt[n-1]>W)
    {
        return knapsack(value,wt,n-1,W);
    }
    return max(knapsack(value,wt,n-1,W - wt[n-1])+value[n-1],knapsack(value,wt,n-1,W));
}
int main(){
    cout<<tillingways(5)<<endl;
    cout<<friendspairing(4)<<endl;
    int wt[]={10,20,30};
    int value[]={100,50,150};
    int W=50;
    cout<<knapsack(value,wt,3,W)<<endl;
    return 0;
}