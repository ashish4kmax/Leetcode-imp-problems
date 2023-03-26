class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        int condition=0;
        for(int i=0;i<words.size();i++) {
            for(int j=0;j<words[i].length();j++) { 
                if(allowed.find(words[i].at(j))<allowed.length()) {
                    condition=1;
                }
                else {
                    condition=0;
                    break;
                }
            }
            if(condition==1) {
                count++;
            }
        }
        return count;
    }
};
