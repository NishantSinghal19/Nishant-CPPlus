class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int r_min = 0, c_min = 0, r = matrix.size(),c=matrix[0].size();
    while (r_min < r)
        {
            while(c_min < c)
            {
                if (matrix[r_min][c_min] == target)
                {
                    return true;
                }
                
                c_min++;

            }
            r_min++;
            c_min=0;
        }
        return false;
    }
};