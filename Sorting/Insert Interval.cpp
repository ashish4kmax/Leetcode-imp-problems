class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        // Overall O(n) as the solution is sorted already.
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        // finding the new interval position in the list of intervals.
        int n = intervals.size();
        int index = n;
        if(n==0) {
            index = 0;
        }
        for(int i=0;i<n;i++) {
            if(newInterval[0]<=intervals[i][0]) {
                index = i;
                break;
            }
        }

        // O(n) for insertion.
        intervals.insert(intervals.begin()+index,newInterval);
        n = intervals.size();
        vector<vector<int>>res;
        
        int mini = intervals[0][0];
        int maxi = intervals[0][1];
    
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
