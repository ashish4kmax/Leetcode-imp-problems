class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); 
        int n = mat.size();
        int m = mat[0].size();
        
        vector<pair<int,int>>ans;
        vector<int>res;
        for(int i=0;i<n;i++) {
            int count = 0;
            for(int j=0;j<m;j++) {
                if(mat[i][j]==1) {
                    count++;
                }
            }
            ans.push_back({count,i});
        }

        sort(ans.begin(),ans.end());

        int row=-1;
        int value=-1;
        for(int i=ans.size()-1;i>=0;i--) {
            if(i>0 && ans[i].first!=ans[i-1].first) {
                value = ans[i].first;
                row = ans[i].second;
                break;
            }
        }

        if(value==-1 && row==-1) {
            value = ans[0].first;
            row = ans[0].second;
        }

        res.push_back(row);
        res.push_back(value);

        return res;
    }
};
