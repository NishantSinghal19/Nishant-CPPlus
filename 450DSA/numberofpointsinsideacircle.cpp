class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        for(auto i=0;i<queries.size();i++){
            int count =0;
            auto r = queries[i][2];
            auto x = queries[i][0];
            auto y = queries[i][1];
            for(int j=0;j<points.size();j++){
                int d = ((points[j][0]-x)*(points[j][0]-x) + (points[j][1]-y)*(points[j][1]-y));
                if(d <= r*r){
                    count++;
                }
            } 
            ans.push_back(count);
        }
        return ans;
    }
};

//Using Distance Formula