class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>>res;

        set<int>w;
        vector<int>wins;
        vector<int>oneloss;

        map<int,int>m;
        int n = matches.size();

        for(int i=0;i<n;i++) {
            m[matches[i][1]]++;
        }

        for(int i=0;i<n;i++) {
            if(m[matches[i][0]]==false) {
                w.insert(matches[i][0]);
            }
        }

        for(auto i:w) {
            wins.push_back(i);
        }

        res.push_back(wins);

        for(auto i:m) {
            if(i.second==1) {
                oneloss.push_back(i.first);
            }
        }

        res.push_back(oneloss);

        return res;
    }
};
