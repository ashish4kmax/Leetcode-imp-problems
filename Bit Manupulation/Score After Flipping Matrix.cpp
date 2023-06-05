class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        vector<int>temp;
        int n = grid[0].size();
        for(int i=0;i<grid.size();i++) {
            // The below manupulations is done to calculate the maximum possible value after flipping rows if the new flipped row has max value we keep that as new one or else the orignal one intact.
            temp = grid[i];
            for(int j=0;j<n;j++) {
                if(grid[i][j]==0) grid[i][j]=1;
                else grid[i][j]=0;
            }
            if(temp>grid[i]) grid[i] = temp; 
        }

        for(int i=0;i<n;i++) {
            vector<int> v1,v2;
            // Now here we comapre the columns which has more no. of set bits that will be final flipped column.
            for(int j=0;j<grid.size();j++) {
                v2.push_back(grid[j][i]);
                if(grid[j][i]==0) {
                    v1.push_back(1);
                }
                else {
                    v1.push_back(0);
                }
            }

            int sb1=0,sb2=0;
            for(int j=0;j<v1.size();j++) {
                if(v1[j]==1) sb1++;
                if(v2[j]==1) sb2++;
            }

            if(sb1>sb2) {
                for(int j=0;j<v1.size();j++) {
                    grid[j][i] = v1[j];
                }
            }
        }

        int res = 0;
        // The sum of all values of rows is the final answer.
        for(int i=0;i<grid.size();i++) {
            int k=0;
            for(int j=n-1;j>-1;j--) {
                res+=(grid[i][j]*pow(2,k));
                k++;
            }
        }

        return res;   
    }
};
