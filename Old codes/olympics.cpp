#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int G1,G2,S1,S2,B1,B2;
        cin>>G1>>S1>>B1>>G2>>S2>>B2;

        int Sum1=G1+S1+B1;
        int Sum2=G2+S2+B2;
        int Result= Sum1>Sum2?1:2;
        cout<<Result<<endl;
        
    }
    
    return 0;
}