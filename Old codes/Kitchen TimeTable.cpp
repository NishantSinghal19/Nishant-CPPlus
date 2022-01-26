#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;cin>>T;
    while (T--)
    {
        int N,count=0;cin>>N;
        int A[N],B[N];
        for (int i = 0; i < N; i++)
        {
            cin>>A[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin>>B[i];
        }
        if (A[0]>=B[0])
        {
            count++;
        }
        
        for (int i = 1; i < N; i++)
        {
            if ((A[i]-A[i-1])>=B[i])
            {
                count++;
            }
        }
        cout<<count<<endl;
        
    }
    
    return 0;
}