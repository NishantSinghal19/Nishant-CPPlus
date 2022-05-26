class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int result =0;
        int count=0;
        for(int i=0;i<gain.size();i++){
            count+=gain[i];
            result= max(result,count);
        }
        return result;
    }
};