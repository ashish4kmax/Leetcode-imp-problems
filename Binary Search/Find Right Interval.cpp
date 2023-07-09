class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<int> ans;
        int n = intervals.size();
        vector<pair<int,int>>val;
        for(int i=0;i<intervals.size();i++)
        {
            val.push_back({intervals[i][0],i});
        }
        
        sort(val.begin(),val.end());

        for(int i=0;i<n;i++) {
            if(intervals[i][0]==intervals[i][1]) ans.push_back(i);
            else {
                int low = 0, high = n-1;
                int res = -1;
                int to_search=intervals[i][1];
                while(low<=high) {
                    int m=low+(high-low)/2;
                    if(val[m].first>=to_search)
                    {
                        res=val[m].second;
                        high=m-1;
                    }
                    else if(val[m].first<to_search)
                    {
                        low=m+1;
                    }
                }
                ans.push_back(res);
            }
        }

        return ans;
    }
};
