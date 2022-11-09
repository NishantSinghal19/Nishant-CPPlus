#include<iostream>
#include<bits/stdc++.h>
#define MAX_SIZE=1000
using namespace std;
int main(){
    int n;cin>>n;
    int hcount =1;
    int vcount=1;
    int arr[MAX_SIZE][MAX_SIZE];
    bool flag =true;
    bool verticalflag =true;
    bool horizontalflag = true;
    int j= if (sqrt(n)== typeof(int))
    {
        sqrt(n);
    }else{
        abs(sqrt(n))+1;
    }
    for (int a = 0; a < n; a++)
    {
        for (int i = j-1; i >=0 ; i--)
        {
            if(flag)
            {
                if (horizontalflag)
                {
                    for (int z = 0; z < hcount; z++)
                    {
                        arr[i-2][z+i-2]=a;    
                    }
                    hcount++;
                    
                }
                else{
                    for (int z = 0; z< hcount; z++)
                    {
                        arr[i-2][i-2-z]=a;    
                    }
                    hcount++;
                }
            
            }
        
        
    }
    
    
    
    return 0;
}