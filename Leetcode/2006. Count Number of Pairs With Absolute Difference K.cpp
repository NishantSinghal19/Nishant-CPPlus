class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                int a= abs(nums[i]-nums[j]);
                if(a==k){
                    count++;
                }
            }
        }
        return count;
    }
};