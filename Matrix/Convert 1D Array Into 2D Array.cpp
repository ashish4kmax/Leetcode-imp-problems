class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);  
        if(m*n==original.size()) {
            vector<vector<int>> res(m);
            int k=0;
            for(int i=0;i<m;i++) {
                res[i] = vector<int>(n);
                for(int j=0;j<n;j++) {
                    res[i][j] = original[k];
                    k++;
                }
            }

            return res;
        }
        else {
            return {};
        }
    }
};
