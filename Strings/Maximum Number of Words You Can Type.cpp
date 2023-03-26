class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<string> words;
        set<int>m;
        string word;
        stringstream s(text);
        // At first we are using the stringstream to seperate out the words and insert it into words array.
        while( s>>word ) {
            words.push_back(word);
        }
        // Now the base two conditions are if there are no broken letters then all words can be typed if there are 26 distinct broken letters then nothing could be 
        // be typed.
        if(brokenLetters.length()==0) {
            return words.size();
        }
        else if(brokenLetters.length()==26) {
            return 0;
        }
        // We use two for loops as brute force the main approch is if we find the broken letter in the words array we insert the index in the set.
        else {
            for(int i=0;i<words.size();i++) {
                for(int j=0;j<brokenLetters.length();j++) {
                    if(words[i].find(brokenLetters[j])<words[i].length()) {
                        m.insert(i);
                    }
                }
            }
            // In the end we will get the total no. of words that is set 'm' size which cannot be typed so answer would be total - cannot be typed. 
            return words.size()-m.size();
        }
    }
};
