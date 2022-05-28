class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> arr;
        for(int i=0; i<nums.size();i++){
            if(nums[i]%2==0){
                arr.push_back(nums[i]);
            }
        }
        for(int i=0; i<nums.size();i++){
            if(nums[i]%2!=0){
                arr.push_back(nums[i]);
            }
        }
        return arr;
    }
};






///By Swapping
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int j=0;
    for(int i=0;i<A.size();i++)
	{
        if(A[i]%2==0)
		{
            swap(A[i],A[j]);
            j++;
		}
	}
    return A;
    }
};