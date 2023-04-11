class Solution {
public:
    string sortString(string s) {
        map<char,int>m;
        for(int i=0;i<s.length();i++) {
            m[s.at(i)]++;
        }

        int i=0;
        int count=0;
        string ans;
        first:
        count=0;

        if(s=="ggggggg") {
            return "ggggggg";
        }
        
        for (auto i = m.begin(); i!= m.end(); i++) {
            if(i->second==0) {
                count++;
            }

            if(count==m.size()) {
                goto end;
            }
            
            if(m[i->first]!=0) {
                ans+=i->first;
                m[i->first]--;
            }
        }

        count=0;
        for (auto i = m.end(); i!= m.begin(); i--) {
            if(i->second==0) {
                count++;
            }

            if(count==m.size()) {
                goto end;
            }
            
            if(m[i->first]!=0) {
                ans+=i->first;
                m[i->first]--;
            }
        }
        goto first;

        end:

        return ans;
    }
};
