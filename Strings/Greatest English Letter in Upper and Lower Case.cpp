class Solution {
public:
    string greatestLetter(string s) {
        // Working on improving its time complexity!!
        unordered_map<char,int>m;
        string caps;
        for(int i=0;i<s.length();i++) {
            if((int)s.at(i)>=97) {
                m.insert({s.at(i),1});
            }
            else {
                caps+=s.at(i);
            }
        }
        vector<char>ans;
        int pair=0;
        char test;
        for(int i=0;i<caps.size();i++) {
            pair = ((int)(caps.at(i))) + 32;
            test = (char)pair;
            if(m[test]==1) {
                ans.push_back(caps.at(i));
            }
        }

        if(ans.size()!=0) {
            int max = 0;
            for(int i=0;i<ans.size();i++) {
                if(ans[i]>ans[max]) {
                    max=i;
                }
            }
            string final_ans;
            final_ans+= ans[max];
            return final_ans;
        }
        
        else {
            return "";
        }
    }
};
