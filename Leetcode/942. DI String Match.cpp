class Solution {
public:
    vector<int> diStringMatch(string s) {
        int inc=0,dec=s.length();
        vector<int> v;
        for(int i=0;i<=s.length();i++)
        {
            if(s[i]=='I')
            {
                v.push_back(inc);
                inc++;
            }
            if(s[i]=='D')
            {
                v.push_back(dec);
                dec--;
            }
        }
        v.push_back(inc);
        return v;
    }
};

//I hoga tp aage ja
///D hoga to piche ja
