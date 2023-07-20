class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        multimap<int,char>mp;
        int n = s.length();

        for(int i=0;i<n;i++) {
            m[s[i]]++;
        }

        for(auto i:m) {
            mp.insert({i.second,i.first});
        }

        string res="";

        for(auto i:mp) {
            for(int j=0;j<i.first;j++) {
                res+=i.second;    
            }
        }

        reverse(res.begin(),res.end());

        return res;
    }
};
