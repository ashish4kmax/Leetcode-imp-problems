class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int count=0;
        vector<vector<int>>matrix;
        vector<int>temp;
        //Initialization with zero.
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                temp.push_back(0);
            }
            matrix.push_back(temp);
            temp.clear();
        }


        int index=0;
        // Increment on rows
        for(int i=0;i<indices.size();i++) {
            index = indices[i][0];
            for(int j=0;j<n;j++) {
                matrix[index][j]+=1;
            }
        }

        // Increment on columns
        for(int i=0;i<indices.size();i++) {
            index = indices[i][1];
            for(int j=0;j<m;j++) {
                matrix[j][index]+=1;
            }
        }

        for(int i=0;i<matrix.size();i++) {
            for(int j=0;j<matrix[i].size();j++) {
                if(matrix[i][j]%2!=0) {
                   count++;
                }
            }
        }

        return count;
    }
};
