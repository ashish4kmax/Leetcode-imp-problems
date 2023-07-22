class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>mp;
        map<int,vector<string>>m;
        int n = words.size();

        for(int i=0;i<n;i++) {
            mp[words[i]]++;
        }

        for(auto i:mp) {
            m[i.second].push_back(i.first);
        }

        vector<string>res;
        int c = 0;
        for(auto it=m.rbegin(); it!=m.rend(); it++) {
            vector<string>temp;
            temp = m[it->first];
            sort(temp.begin(),temp.end());

            for(int i=0;i<temp.size();i++) {
                if(c==k) return res;
                res.push_back(temp[i]);
                c++;
            }
        }

        return res;
    }
};
