class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int richest=0;
        int n=accounts.size();
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }
            if (richest<sum){
                richest=sum;
            }
        }
        return richest;
    }
};