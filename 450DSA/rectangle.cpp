class SubrectangleQueries {
    vector<vector<int>> rect;
public:
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        for(int i=0;i<rectangle.size();i++){
            vector<int> vec;
            for(int j =0;j<rectangle[0].size();j++) vec.push_back(rectangle[i][j]);
            rect.push_back(vec);
        }
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        for(int i =row1;i<=row2;i++){
            for(int j=col1;j<=col2;j++){
                rect[i][j] = newValue;
            }
        }
    }
    
    int getValue(int row, int col) {
        return rect[row][col];
    }
};