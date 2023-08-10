class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n = grid.size();
        int m = grid[0].size();
        int perimeter = 0;

        // for i=0 checking before hand
        for(int j=0;j<m;j++) {
            if(grid[0][j]==1) perimeter+=4;
        }

        //cout<<perimeter<<endl;
        for(int j=0;j<m-1;j++) 
            if(grid[0][j]==1 && grid[0][j]==grid[0][j+1]) perimeter-=2;


        // for i=1 it starts from here
        for(int i=1;i<n;i++) {
            // count no. of lands rowwise
            for(int j=0;j<m;j++) {
                if(grid[i][j]==1) perimeter+=4;
            }

            // remove the inner perimeters rowwise
            for(int j=0;j<m-1;j++) {
                if(grid[i][j]==1 && grid[i][j]==grid[i][j+1]) perimeter-=2;
            }

            // remove the inner perimeters columnwise
            for(int j=0;j<m;j++) {
                if(grid[i][j]==1 && grid[i][j]==grid[i-1][j]) perimeter-=2;
            }
        }

        return perimeter;
    }
};
