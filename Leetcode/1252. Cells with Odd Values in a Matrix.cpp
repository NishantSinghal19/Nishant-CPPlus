class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
vector<vector<int>> mat(n);
        for(int i(0);i<n;i++) mat[i].resize(m); // the default values (0 for int) would be useful 
        
        for(auto &index: indices){
            for(int i(0);i<n;i++) mat[i][index[1]]+=1;
            for(int j(0);j<m;j++) mat[index[0]][j]+=1;
        }
        
        int oddCellsCount(0);
        for(auto &row: mat)
            for(auto &col: row)
                if(col & 1) oddCellsCount++;
        
        return oddCellsCount;
    }
};


/// Difficult question re made the matrix again;