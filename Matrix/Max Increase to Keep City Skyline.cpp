class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<vector<int>>rcmax;
        int n = grid.size();
        
        for(int i=0;i<n;i++) {
            vector<int>temp;
            int rmax = i;
            int cmax = i;
            for(int j=0;j<n;j++) {
                if(grid[i][j]>grid[i][rmax]) {
                    rmax = j;
                }

                if(grid[j][i]>grid[cmax][i]) {
                    cmax = j;
                }
            }
            cmax = grid[cmax][i];
            temp.push_back(cmax);
            temp.push_back(grid[i][rmax]);
            rcmax.push_back(temp);
            temp.clear();
        }

        int res = 0;
        for(int i=0;i<n;i++) {
            int rmax = rcmax[i][1];
            for(int j=0;j<n;j++) {
                int cmax = rcmax[j][0];
                res+= min(rmax,cmax) - grid[i][j];
            }
        }   

        return res;
    }
};
