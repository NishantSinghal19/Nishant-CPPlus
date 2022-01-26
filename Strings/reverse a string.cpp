#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverseString(vector<char> &s) {
    int start=0,end= s.size()-1;
    while (start<end)
    {
        char temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        start++;
        end--;
    }
    
        
}
int main(){
    string s;
    cin>>s;
    vector<char> str;
    for (int i = 0; i < s.length(); i++)
    {
        str.push_back(s[i]);
    }
    reverseString(str);
    for (int i = 0; i < str.size(); i++)
    {
        cout<<str[i];
    }
    
    return 0;
}