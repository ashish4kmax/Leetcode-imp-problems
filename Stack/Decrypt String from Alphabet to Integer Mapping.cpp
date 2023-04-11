class Solution {
public:
    string freqAlphabets(string s) {
        string ans;
        string k;
        int i=0;
        // We run the loop till the whole string s is mapped that is till the string becomes empty so what we do here is that we run a loop and check at every i+2th position if the string has a '#' if it has then we map it and delete all the characters till that.
        while(s.length()!=0) {
            if((i+2)<s.length() && s.at(i+2)=='#') {
                k+=s.at(i);
                k+=s.at(i+1);
                ans+=(char)(stoi(k)+96);
                k="";
                s.erase(s.begin()+0);
                s.erase(s.begin()+0);
                s.erase(s.begin()+0);
            }
            else {
                // if i+2th position is not a '#' then we simply map the given i=0th char and erase it from given string s.
                ans+=(char)((s.at(i)-'0')+96);
                s.erase(s.begin()+0);
            }
        }

        return ans;
    }
};
