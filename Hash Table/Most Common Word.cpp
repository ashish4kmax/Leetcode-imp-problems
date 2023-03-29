// Time Complexity is O(n) and 0ms.
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        vector<string>words;
        string temp;
        // The reason we are using two maps is the first map 'm' to get the freq or for the most comman words and the second map 'search' for inputting all the banned
        // words and giving them true value that means if in string array 'words' if the word is banned it will give true map value so that won't be taken as an 
        // freq++ input.
        unordered_map<string,int>m;
        unordered_map<string,bool>search;
        
        // This for loop is for map 'search' for that banned word checking. 
        for(int i=0;i<banned.size();i++) {
            search.insert({banned[i],true});
        }
          
        // This for loop is to make all letters to lowercase as we have to return a lowercase string.
        for(int i=0;i<paragraph.length();i++) {
            if(isalpha(paragraph.at(i))) {
                paragraph.at(i) = tolower(paragraph.at(i));
            }
        }
        
        // This for loop is for getting the words from the given paragraph string.
        for(int i=0;i<paragraph.length();i++) {
            if(isalpha(paragraph.at(i))) {
                temp+=paragraph.at(i);
            }
            else {
                if(temp.length()!=0) {
                    words.push_back(temp);
                }
                temp="";
            }
        }

        if(temp.length()!=0) {
            words.push_back(temp);
        }
        
        // Now if the word is banned it won't take as input.
        for(int i=0;i<words.size();i++) {
            if(search[words[i]]==false) {
                m[words[i]]++;
            } 
        }
        
        // Now this for loop is used to get most comman word freq.
        int check=0;
        for(auto i:m) {
            check = max(check, i.second);
        }
        
        // Now for that freq the string for that freq is the answer.
        string ans;
        for(auto i:m) {
            if(i.second==check) {
                ans=i.first;
                break;
            }
        } 
        
        // After getting answer we return it.
        return ans;
    }
};
