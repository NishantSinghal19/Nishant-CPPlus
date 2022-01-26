#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char A[]={'A','B','C','D','E','F','G','H'};
    int count=0;
    for (int i = 0; i <n; i++)
    { 
        for (int j = i+1; j >0 ; j--)
        {
            cout<<A[count];
            count++;
        }
        cout<<endl;
        
    }
    
    return 0;
}