class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res(n);
        int a = 1;
        for (int i = 0; i < n; i+=2) {
            if (i == n-1) {
                res[i] = 0;
                return res;
            }
                
            res[i] = a;
            res[i+1] = -a;
            a++;
        }
        return res;
    }
};

//In odd we should do the last one zero