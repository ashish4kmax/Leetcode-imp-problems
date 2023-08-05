class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int>res;
        
        for(int i=0;i<n;i++) {
            int min = 0;
            for(int j=1;j<matrix[i].size();j++) {
                if(matrix[i][j]<matrix[i][min]) min = j;
            }

            int max = 0;
            for(int j=0;j<n;j++) {
                if(matrix[j][min]>matrix[max][min]) max = j;
            }

            for(int j=0;j<matrix[i].size();j++) {
                if(matrix[max][min]==matrix[i][j]) res.push_back(matrix[i][j]);
            }
        }

        return res;
    }
};
