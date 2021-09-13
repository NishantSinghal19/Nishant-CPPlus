#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int c,g,H;
        cin>>g>>c;
        H= pow(c,2)/(2*g);
        cout<<H<<endl;
    }
    
    return 0;
}