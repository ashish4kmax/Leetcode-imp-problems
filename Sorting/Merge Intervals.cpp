// Efficient O(N*logN) algorithm if sorted intervals are passed then can be done in O(N).
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>res;
        
        int mini = intervals[0][0];
        int maxi = intervals[0][1];
        int n = intervals.size();

        for(int i=0;i<n-1;i++) {
            if(maxi>=intervals[i+1][0] && maxi<=intervals[i+1][1]) {
                maxi = max(maxi, intervals[i+1][1]);
            }
            else {
                if(maxi>=intervals[i+1][0] && maxi>=intervals[i+1][1]) continue;
                res.push_back({mini,maxi});
                mini = intervals[i+1][0];
                maxi = intervals[i+1][1];
            }
        }

        res.push_back({mini,maxi});

        return res;
    }
};
