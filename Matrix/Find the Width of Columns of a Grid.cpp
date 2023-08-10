class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);   
        
        int n = grid.size();
        int m = grid[0].size();

        vector<int>res;
        for(int i=0;i<m;i++) {
            int w=1;
            for(int j=0;j<n;j++) {
                string s="";
                s+=to_string(grid[j][i]);
                int len = s.length();
                w = max(w, len);
            }
            res.push_back(w);
        }

        return res;
    }
};
