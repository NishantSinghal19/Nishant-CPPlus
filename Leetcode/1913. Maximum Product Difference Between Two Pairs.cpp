class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int a,b,c,d;
        a= *max_element (nums.begin(), nums.end());
        vector<int>::iterator i= find (nums.begin(), nums.end(), a);
        nums.erase(i);
        b= *max_element (nums.begin(), nums.end());
        c= *min_element (nums.begin(), nums.end());
        vector<int>::iterator j= std::find (nums.begin(), nums.end(), c);
        nums.erase(j);
        d =*min_element (nums.begin(), nums.end());
        int diff= (a*b)-(c*d);
        return diff;
    }
};