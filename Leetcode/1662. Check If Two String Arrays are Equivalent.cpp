class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        bool flag;
        string a,b;
        for(auto i:word1){
            a+=i;
        }
        for(auto i:word2){
            b+=i;
        }
        if(a.compare(b)==0){
            return flag=true;
        }
        return flag = false;
    }
};



//here auto is used for range
//a.compare(b) is used for string comparison 