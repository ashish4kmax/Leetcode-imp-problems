class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int>res;

        int n = mat.size();
        int m = mat[0].size();
        int c = 1;

        for(int i=0;i<m;i++) {
            int k=i;
            vector<int>temp;
            for(int j=0;j<n && k>=0;j++,k--) {
                temp.push_back(mat[j][k]);
            }

            if(c%2!=0) {
                reverse(temp.begin(),temp.end());
            }

            for(int i=0;i<temp.size();i++) {
                res.push_back(temp[i]);
            }
            c++;
        }

        for(int i=1;i<n;i++) {
            int k=i;
            vector<int>temp;
            for(int j=m-1;j>=0 && k<n;j--,k++) {
                temp.push_back(mat[k][j]);
            }

            if(c%2!=0) {
                reverse(temp.begin(),temp.end());
            }

            for(int i=0;i<temp.size();i++) {
                res.push_back(temp[i]);
            }
            c++;
        }

        return res;   
    }
};
