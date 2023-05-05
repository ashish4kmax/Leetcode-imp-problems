class Solution {
public:
    inline bool isVowel(char& c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int maxVowels(string s, int k) {
        int max_vowels = 0;
        int running_count=0;
        for(int i = 0; i < k; i++){
            if(isVowel(s[i])) running_count++;
        }

        max_vowels = running_count;
        
        for(int i = k; i < s.size(); i++){
            running_count += (int)isVowel(s[i]) - (int)isVowel(s[i-k]);

            max_vowels = max(max_vowels, running_count);
        }

        return max_vowels;
    }
};

static const auto init = []{
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        return false;
}();

// Naive Approch :-
/*
class Solution {
public:
    int maxVowels(string s, int k) {
        string temp;
        int count=0;
        int res=0;
        for(int i=0;i<k;i++) {
            if(s.at(i)=='a' || s.at(i)=='e' || s.at(i)=='i' || s.at(i)=='o' || s.at(i)=='u') {
                count++;
            }
            temp+=s.at(i);
        }
        res = count;
        
        for(int i=k;i<s.length();i++) {
            if(temp.at(0)=='a' || temp.at(0)=='e' || temp.at(0)=='i' || temp.at(0)=='o' || temp.at(0)=='u') {
                count--;
            }
            temp.erase(temp.begin());
            res = max(count,res);

            if(s.at(i)=='a' || s.at(i)=='e' || s.at(i)=='i' || s.at(i)=='o' || s.at(i)=='u') {
                count++;
            }
            res = max(count,res);
            temp+=s.at(i);
        }

        return res;
    }
};
*/
