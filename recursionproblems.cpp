#include<iostream>
#include<bits/stdc++.h>

using namespace std;

/*
void reverse(string s){
    if (s.length()==0)
    {
        return;
    }
    string ros= s.substr(1);
    reverse(ros);
    cout<<s[0];
}
void replacePI(string s){
    if (s.length()==0)
    {
        return;
    }
    if (s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        replacePI(s.substr(2));
    }
    else
    {
        cout<<s[0];
        replacePI(s.substr(1));
    }
}
void towerofhanoi(int n,char src,char dest,char help){
        if (n==0)
        {
            return;
        }
        
        towerofhanoi(n-1,src,help,dest);
        cout<<"Move from "<<src<<" to "<<dest<<endl;
        towerofhanoi(n-1,help ,dest,src);
}  
string removedup(string s){
    if (s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ans= removedup(s.substr(1));
    if (ch==ans[0]){
        return ans;
    }
    return (ch+ans);
}  

string moveallX(string s){

    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=moveallX(s.substr(1));
    if (ch=='x')
    {
        return (ans + ch);
    }
    return ch + ans;

}

void subseq(string s,string ans){

    if (s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    

    char ch=s[0];
    string ros=s.substr(1);

    subseq(ros,ans);
    subseq(ros,ans+ch);

}
*/

void subseq(string s, string ans){
    if (s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
    subseq(ros,ans + to_string(code));
}
string keypadArr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad(string s,string ans){
    if (s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string code= keypadArr[ch-'0'];
    string ros=s.substr(1);
    for (int i = 0; i < code.length(); i++)
    {
        keypad(ros,ans+code[i]);
    }
    
}

int main(){
    //reverse("binod");
    //cout<<"\n";
    //replacePI("pippdlnpipisdfpipp");
    //cout<<"\n";
    //towerofhanoi(3,'A','C','B');
    //cout<<removedup("aaaabbbbbbcccccccddddddee")<<endl;
    //cout<<moveallX("axbbxxxcccxxxd")<<endl;
    //subseq("ABC","");
    //cout<<endl;
    //subseq("AB","");
    keypad("2","");
    return 0;
}