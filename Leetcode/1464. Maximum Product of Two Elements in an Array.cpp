class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a,b;
        a= *max_element(nums.begin(),nums.end());
        vector<int>::iterator i= find (nums.begin(), nums.end(), a);
        nums.erase(i);
        b= *max_element(nums.begin(),nums.end());
        int max= (a-1)*(b-1);
        return max;
    }
};