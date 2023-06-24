class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int>ans;
        multimap<vector<int>,int>m;

        for(int i=0;i<mat.size();i++) {
            m.insert({mat[i],i});
        }
        sort(mat.begin(),mat.end());

        int count = 0;
        for (auto itr = m.begin(); itr != m.end(); ++itr) {
            if(count==k) break;
            ans.push_back(itr->second);
            count++;
        }   

        return ans;
    }
};
