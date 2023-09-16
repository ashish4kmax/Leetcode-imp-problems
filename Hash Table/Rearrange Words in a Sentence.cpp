class Solution {
public:
    string arrangeWords(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        map<int,vector<string>>m1;

        vector<string>strs;
        int n = s.length();
        string temp="";
        for(int i=0;i<n;i++) {
            if(s[i]==' ') {
                strs.push_back(temp);
                temp="";
            }
            else {
                temp+=s[i];
            }
        }
        strs.push_back(temp);
        
        for(int i=0;i<strs.size();i++) {
            m1[strs[i].length()].push_back(strs[i]);   
        }

        s="";
        int c=0;
        for(auto i:m1) {
            for(int j=0;j<i.second.size();j++) {
                s+=i.second[j];
                s+=" ";
            }
            c++;
        }

        for(int i=0;i<n;i++) {
            if(i==0) {
                s[i] = toupper(s[i]);
            }
            else {
                s[i] = tolower(s[i]);
            }
        }

        s.erase(s.begin()+s.length()-1,s.end());
        return s;
    }
};
