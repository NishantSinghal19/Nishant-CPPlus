#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s="74218738479";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;
    return 0;
}