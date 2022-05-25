class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string s;
        for(int i=0;i<words.size();i++){
            string a=words[i];
            reverse(words[i].begin(),words[i].end());
            if(words[i]==a){
                s= a;
                break;
            }
        }
        return s;
    }
};