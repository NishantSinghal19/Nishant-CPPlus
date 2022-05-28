class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum=0;
       sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=2)
        {
            sum+=nums[i];
        }
    return sum;
    }
};

//Max sum can only be achieved in min when they are sorted and min number from starting can'yt go in other pairs