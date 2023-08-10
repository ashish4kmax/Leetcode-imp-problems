class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        if(n<2 || m<2) return true;

        for(int i=0;i<n-1 && i<m-1;i++) {
            if(grid[i][i]!=grid[i+1][i+1]) return false;
        }

        for(int k=1;k<m;k++) {
            for(int i=0,j=k;i<n-1 && j<m-1;i++,j++) {
                if(grid[i][j]!=grid[i+1][j+1]) return false;
            } 
        }  

        for(int k=1;k<n;k++) {
            for(int i=0,j=k;i<m-1 && j<n-1;i++,j++) {
                if(grid[j][i]!=grid[j+1][i+1]) return false;
            } 
        } 

        return true;
    }
};
