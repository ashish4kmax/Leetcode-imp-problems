class Solution {
public:
    // Set-Map Approach :-
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int>ans (k,0);
        vector<int>uams;
        unordered_map<int,set<int>>m;
        unordered_map<int,int>mp;
        int n = logs.size();
        for(int i=0;i<n;i++) {
            m[logs[i][0]].insert(logs[i][1]);
        }

        for(auto i:m) {
            uams.push_back(i.second.size());
        }

        for(int i=0;i<uams.size();i++) {
            mp[uams[i]]++;
        }

        for(auto i:mp) {
            ans[i.first-1] = i.second;
        }

        return ans;
    }
};
