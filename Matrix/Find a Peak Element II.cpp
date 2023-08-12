class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n = mat.size();
        int m = mat[0].size();

        vector<int>res;
        int r = 0;
        int c = 0;
        int max = mat[0][0];
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(mat[i][j]>max) {
                    max = mat[i][j];
                    r = i;
                    c = j;
                }
            }
        }

        res.push_back(r);
        res.push_back(c);

        return res;
    }
};
