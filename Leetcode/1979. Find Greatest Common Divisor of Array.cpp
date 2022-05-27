class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end()), mini = *min_element(nums.begin(), nums.end()), remain;
        while (mini) {
            remain = maxi % mini;
            maxi = mini;
            mini = remain;
        }
        return maxi;
    }
};



// MEthod of finding GCD