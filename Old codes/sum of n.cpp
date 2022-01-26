#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Sum(int n){
    if (n==0)
    {
        return 0;
    }
    
    int prevsum=Sum(n-1);
    return n + prevsum;
}
int power(int n,int p){
    if (p==0)
    {
        return 1;
    }
    
    int prevpower=power(n,p-1);
    return n*prevpower;
}
int factorial(int n){
    if (n==0)
    {
        return 1;
    }
    int prevfactorial=factorial(n-1);
    return n*prevfactorial;
}
int fib(int n){
    if (n==0 || n==1)
    {
        return n;
    }
    
    return fib(n-1) +fib(n-2);
}
int main(){
    cout<<Sum(4)<<endl;
    cout<<power(4,3)<<endl;
    cout<<factorial(5)<<endl;
    cout<<fib(4)<<endl;
    return 0;
}