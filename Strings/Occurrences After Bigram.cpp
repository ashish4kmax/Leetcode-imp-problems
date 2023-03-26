class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        string word;
        stringstream ss(text);
        vector<string>s;
        while (ss>>word) {
            s.push_back(word);
        }

        vector<string>ans;
        for(int i=0;i<s.size()-2;i++) {
            if(s[i]==first && s[i+1]==second) {
                ans.push_back(s[i+2]);
            }
        }

        return ans;
    }
};
