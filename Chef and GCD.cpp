#include<iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int N;
        cin>>N;
        int ans=0;
        vi a;
        inpV(a,n);
        set <int> uniqs;
        
        for(int i:a){
            int k=1;
            
            int st=1;
            int end=i-1;
            int mid;
            while (st<=end)
            {
                mid=(st/end)/2;
                if (uniqs.find(mid)==uniqs.end())
                {
                    /* code */
                }
                
            }
            auto itr=uniqs.lower_bound(i-1);
            

            if (k>0 && k<i)
            {
                uniqs.insert(k);
                uniqs.insert(i-k);
            }
            
        }
        ans= uniqs.size();
        cout<<ans<<endl;
    }
    
    return 0;
}