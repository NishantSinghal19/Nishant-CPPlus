class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
     
     int temp=nums.size()/3;

     unordered_map<int,int> mp;
     for(int i=0;i<nums.size();++i){
         mp[nums[i]]++;
     }   

     for(auto i:mp){
         if(i.second>temp){
             ans.push_back(i.first);
         }
     }
     return ans;
    
    }
};