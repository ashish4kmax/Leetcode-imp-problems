class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string ans;
        // The thing we check here is that weather the string begins with the s or not like we concatinate all the strings 
        // From the array and then we check all the time if it's making s if it is its definietly a prefix of array.
        for(int i=0;i<words.size();i++) {
            if(ans==s) {
                return true;
            }
            ans+=words[i];
        }

        if(ans==s) {
            return true;
        }

        // If it doesn't then it's not a prefix of the array
        return false;
    }
};
