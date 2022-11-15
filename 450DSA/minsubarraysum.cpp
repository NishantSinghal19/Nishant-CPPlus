class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int sum=0,ctr=0,ans = INT_MAX;
        for(int i=0,j=0; i<n;){
            if(sum<target){
                sum +=nums[i];
                i++;
                ctr++;
            }
            
                while(sum>=target){
                    ans = min(ans,ctr);
                    ctr--;
                    sum -= nums[j];
                    j++;
                }
            
        }
        if(ans>n){
            return 0;
        }
        return ans;
    }
};


//Sliding Problem