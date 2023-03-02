class Solution {
public:
    int compress(vector<char>& chars) {
        string s;
        string ans;
        for(int i=0;i<chars.size();i++) {
            s+=chars[i];
        }

        int count=1;
        string freq;
        int i;
        for(i=0;i<s.length()-1;i++) {
            if(s.at(i)==s.at(i+1)) {
                count++;
            }
            else {
                if(count==1) {
                    ans+=s.at(i);
                }
                else {
                    freq= to_string(count);
                    ans+=s.at(i);
                    ans+=freq;
                    count=1;
                }
            }
        }

        if(count==1) {
            ans+=s.at(i);
        }
        else {
            ans+=s.at(i);
            freq = to_string(count);
            ans+=freq;
        }

        string temp;
        chars.clear();
        for(int i=0;i<ans.length();i++) {
            chars.push_back(ans[i]);
        }
        
        return chars.size();
    }
};
