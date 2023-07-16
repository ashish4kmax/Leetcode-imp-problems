/*
1) At first we store the words vector into a temporary vector for our processing and maintaining the string we want.

2) Now for anagram we sort the words as after sorting we check weather the loop have any one equal word or not if not we return n-1 as all the words in words vector are anagrams.

3) If not then in the below for loop we check weather the two adjacent words that is words[i]==words[i+1] if they are we also have to check if this word already present in our ans if it is we can't insert more of this as we want all the words(elements) of res to be anagram same if they are not equal also.

4) Fianlly we check if the beginning word is equal to adjacent or not as we were not able to insert if it was into res.

Finally returning res as answer.
*/

class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int n = words.size();
        vector<string>temp;
        vector<string>res;
        unordered_map<string,bool>m;

        temp = words;

        for(int i=0;i<n;i++) {
            sort(temp[i].begin(),temp[i].end());
        }

        int c=0;
        for(int i=0;i<n-1;i++) {
            if(temp[i]!=temp[i+1]) c++;
        }
        
        // If all the words are anagrams.
        if(c==n-1) res = words;

        // If not then we process and find the only anagrams.
        else {
            for(int i=0;i<n-1;i++) {
                if(m[temp[i]]!=true && temp[i]==temp[i+1]) {
                    res.push_back(words[i]);
                    m[temp[i]] = true;
                }
                else {
                    if(temp[i]!=temp[i+1]) {
                        res.push_back(words[i+1]);
                        m[temp[i+1]] = true;
                    }
                }
            }

            if(temp.size()>1 && temp[0]!=temp[1]) {
                res.insert(res.begin(),words[0]);
            }
        }

        return res;
    }
};
