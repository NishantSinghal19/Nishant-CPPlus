class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1){
            return 0; 
        }else{
        int max = *max_element(prices.begin()+1,prices.end());
        auto it = find (prices.begin(), prices.end(), max);
        int a = it - prices.begin();
        auto min = *min_element(prices.begin()+1,prices.begin()+a+1);
        if(min>prices[0]){
            min= prices[0];
        }
        if(min>max){
            return 0;
        }
        else{
            return (max - min);
        }
    }}
};
//Error in repeat prices


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minim = prices[0];
        int maxProfit=0;
        for(auto i:prices){
            minim=min(minim , i);
            maxProfit=max(maxProfit,(i-minim));
        }
        return maxProfit;
    }
};
//Easy solution 