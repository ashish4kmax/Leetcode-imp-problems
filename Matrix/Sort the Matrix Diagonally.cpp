class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        vector<int>temp;
        for(int i=0;i<mat.size();i++) {
            temp.clear();
            for(int k=i,j=0; j<mat[0].size() && k<mat.size() ; j++, k++) temp.push_back(mat[k][j]);
            sort(temp.begin(),temp.end());
            for(int j=0,k=i;j<mat[0].size() && k<mat.size() ; j++, k++) mat[k][j] = temp[j];
        }

        for(int i=1;i<mat[0].size();i++) {
            temp.clear();
            for (int k=0, j=i; j<mat[0].size() && k<mat.size(); k++, j++) temp.push_back(mat[k][j]);
            sort(temp.begin(),temp.end());
            for (int j=i, k=0; j<mat[0].size() && k<mat.size(); k++, j++) mat[k][j] = temp[k];
        }

        return mat;
    }
};
