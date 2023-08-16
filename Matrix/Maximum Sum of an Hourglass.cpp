class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int n = grid.size();
        int m = grid[0].size();
        
        int res = INT_MIN;

        for(int i=1;i<n-1;i++) {
            for(int j=1;j<m-1;j++) {
                // diagonals sums
                int hgsum = grid[i][j]+grid[i-1][j-1]+grid[i+1][j+1];
                hgsum+= grid[i-1][j+1]+grid[i+1][j-1];
                
                // column sums
                hgsum+= grid[i-1][j]+grid[i+1][j];

                res = max(res, hgsum);
            }
        }

        return res;
    }
};
