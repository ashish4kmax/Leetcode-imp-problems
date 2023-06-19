// Using Vector dynamically allocating size:-
class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<int>rows;
        vector<int>cols;
        vector<vector<int>>diff;
        diff = grid;

        int m = grid.size();
        int n = grid[0].size();
        for(int i=0;i<m;i++) {
            int counts = 0;
            for(int j=0;j<n;j++) {
                if(grid[i][j]==1) counts++;
            }
            rows.push_back(counts);
        }

        for(int i=0;i<n;i++) {
            int counts = 0;
            for(int j=0;j<m;j++) {
                if(grid[j][i]==1) counts++;
            }
            
            cols.push_back(counts);
        }

        for(int i=0;i<rows.size();i++) {
            for(int j=0;j<cols.size();j++) {
                diff[i][j] = rows[i] + cols[j] - (n-rows[i]) - (m-cols[j]);
            }
        }

        return diff;
    }
};

/*
Using array static size allocation to reduce processing power that is to reduce time complexity :-
class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> ans(n,vector<int> (m,0));
        int row[n],col[m];
        for(int i = 0; i < n; i++) {
            int sum = 0;
            for(int j = 0; j < m; j++)
                sum += grid[i][j];
            row[i] = sum;
        }
        for(int j = 0; j < m; j++) {
            int sum = 0;
            for(int i = 0; i < n; i++)
                sum += grid[i][j];
            col[j] = sum;
        }
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                ans[i][j] = row[i] + col[j] - (n - row[i]) - (m - col[j]);

        return ans;
    }
};
*/
