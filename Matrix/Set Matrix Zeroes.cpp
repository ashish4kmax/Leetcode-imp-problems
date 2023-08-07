// To improve space complexity
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>>res;
        res = matrix;
        for(int i=0;i<n;i++) {
            int flag = 0;
            int r;
            int c;
            for(int j=0;j<m;j++) {
                if(matrix[i][j]==0) {
                    flag = 1;
                    r=i;
                    c=j;
                    if(flag==1) {
                        for(int j=0;j<m;j++) {
                            res[r][j] = 0;
                        }

                        for(int j=0;j<n;j++) {
                            res[j][c] = 0;
                        }
                    }
                }
            }

        }

        matrix = res;
    }
};
