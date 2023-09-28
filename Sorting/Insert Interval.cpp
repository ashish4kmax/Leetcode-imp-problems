// Similar to Merge intervals.
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& inter, vector<int>& newInterval) {
        // Overall O(n) as the solution is sorted already.
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        // finding the new interval position in the list of intervals.
        int n = inter.size();
        int index = n;
        if(n==0) {
            index = 0;
        }
        for(int i=0;i<n;i++) {
            if(newInterval[0]<=inter[i][0]) {
                index = i;
                break;
            }
        }

        // O(n) for insertion.
        inter.insert(inter.begin()+index,newInterval);
        n = inter.size();
        vector<vector<int>>res;

        vector<int>temp;
        int mini= inter[0][0], maxi=inter[0][1];
        for(int i=1;i<n;i++) {
            if(inter[i][0]>=mini && inter[i][0]<=maxi) {
               maxi = max(maxi,inter[i][1]);
            }
            else {
                temp.push_back(mini);
                temp.push_back(maxi);
                res.push_back(temp);
                mini = inter[i][0];
                maxi = inter[i][1];
            }
            temp.clear();
        }

        if(inter[n-1][0]>=mini && inter[n-1][0]<=maxi) {
            maxi = max(maxi,inter[n-1][1]);
        }
        else {
            mini = inter[n-1][0];
            maxi = inter[n-1][1];
        }


        temp.push_back(mini);
        temp.push_back(maxi);
        res.push_back(temp);

        return res;
    }
};
