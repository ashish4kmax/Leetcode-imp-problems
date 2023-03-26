class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        // At first we can create the map consisting of vowel characters with a true value.
        unordered_map<char,int>m;
        m.insert({'a',1});
        m.insert({'e',1});
        m.insert({'i',1});
        m.insert({'o',1});
        m.insert({'u',1});

        for(int i=left;i<right+1;i++) {
            // Now iterating from left to right index of words vector we check if that string starts and ends with a vowel by using map value.
            if(m[words[i].at(0)]==1 && m[words[i].at(words[i].length()-1)]==1) {
                count++;
            }
        }

        return count;
    }
};
