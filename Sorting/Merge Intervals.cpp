// Efficient O(N*N) algorithm if sorted intervals are passed then can be done in O(N).
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int n = intervals.size();

        vector<vector<int>>res;
        vector<pair<int,int>>inter;
        
        for(int i=0;i<n;i++) {
            pair<int,int>temp;
            temp.first = intervals[i][0];
            temp.second = intervals[i][1];
            inter.push_back(temp);
        }

        sort(inter.begin(),inter.end());

        vector<int>temp;
        int mini= inter[0].first, maxi=inter[0].second;
        for(int i=1;i<n;i++) {
            if(inter[i].first>=mini && inter[i].first<=maxi) {
               maxi = max(maxi,inter[i].second);
            }
            else {
                temp.push_back(mini);
                temp.push_back(maxi);
                res.push_back(temp);
                mini = inter[i].first;
                maxi = inter[i].second;
            }
            temp.clear();
        }

        if(inter[n-1].first>=mini && inter[n-1].first<=maxi) {
            maxi = max(maxi,inter[n-1].second);
        }
        else {
            mini = inter[n-1].first;
            maxi = inter[n-1].second;
        }


        temp.push_back(mini);
        temp.push_back(maxi);
        res.push_back(temp);

        return res;
    }
};
