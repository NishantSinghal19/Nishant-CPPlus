#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int levensthein(string s,string t){
    int sDistance=s.length();
    int tDistance=t.length();
    int length=0;
    if (tDistance==0)
    {
        length+=sDistance;
        return length;
    }
    else if (sDistance==0)
    {
        length+=tDistance;
        return length;
    }
    else
    {
        if (s[sDistance-1]==t[tDistance-1])
        {
            return length;
        }
            else
        {
            length+=1+ min(levensthein(s[sDistance-1],t),levensthein(s,t[tDistance-1]),levensthein(s[sDistance-1],t[tDistance-1]));
            return length;
        }
               
    }
    
}
int main(){
    string s,t;
    cin>>s>>t;
    levensthein(s,t);
}