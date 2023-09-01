class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int n = strs.size();

        map<string, vector<string>>m;
        for(int i=0;i<n;i++) {
            string s = strs[i];
            sort(strs[i].begin(),strs[i].end());
            m[strs[i]].push_back(s);
        }

        vector<vector<string>>res;

        for(auto i:m) {
            res.push_back(i.second);
        }

        return res;
    }
};
