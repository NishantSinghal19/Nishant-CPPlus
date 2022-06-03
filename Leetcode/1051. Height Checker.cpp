class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected(heights.size());
        for(int i=0; i<heights.size();i++){
            expected[i]=heights[i];
            }
        sort(expected.begin(),expected.end());
        int ans=0;
        for(int i=0; i<heights.size();i++){
            if(expected[i]!=heights[i]){
                ans++;
            }
            }
        return ans;
    }
};