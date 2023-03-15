class Solution {
public:
    string reverseOnlyLetters(string s) {
        vector<pair<int,char>>dashes;
        vector<char>str;
        for(int i=0;i<s.length();i++) {
            if(isalpha(s.at(i))) {
                // As we need to reverse only the aplhabetical charecters we take only alphabets for this char vector.
                str.push_back(s[i]);
            }
            else {
                // For the rest non alphabetical charecters we make a pair at what index that char to be inserted.
                dashes.push_back({i,s.at(i)});
            }
        }
        
        // We reversed only the letters here.
        reverse(str.begin(),str.end());
        string ans;
        for(int i=0;i<str.size();i++) {
            ans+=str[i];
        }
        
        for(int i=0;i<dashes.size();i++) {
            // Now the places were there were no letters are inserted with those charecters.
            ans.insert(ans.begin()+dashes[i].first, dashes[i].second);
        }

        return ans;
    }
};
