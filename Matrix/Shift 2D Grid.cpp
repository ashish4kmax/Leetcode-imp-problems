class Solution {
public:
    void rightRotate(vector<int>& arr, int d, int n) {
        // if in case d>n,this will give segmentation fault.
        d=d%n;
        reverse(arr.begin(), arr.end());
        reverse(arr.begin(), arr.begin()+d);
        reverse(arr.begin()+d, arr.end());
    }

    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int>arr;
        int n = grid.size();
        int m = grid[0].size();

        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                arr.push_back(grid[i][j]);
            }
        }

        // shifting the 2D grid is equivalent to rotating the array
        rightRotate(arr, k, arr.size());

        int c = 0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                grid[i][j] = arr[c];
                c++;
            }
        }

        return grid;
    }
};
