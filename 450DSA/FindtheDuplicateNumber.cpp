class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int duplicate;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                duplicate=nums[i];
            }
        }
        return duplicate;
    }
};