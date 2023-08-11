class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);   
        int n = mat.size();
        int m = mat[0].size();

        if(n*m!=r*c) return mat;
        vector<int>elements(m*n);

        int k = 0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                elements[k] = mat[i][j];
                k++;
            }
        }

        vector<vector<int>> res(r);
        k=0;
        for(int i=0;i<r;i++) {
            res[i] = vector<int>(c);
            for(int j=0;j<c;j++) {
                res[i][j] = elements[k];
                k++;
            }
        }

        return res;
    }
};
