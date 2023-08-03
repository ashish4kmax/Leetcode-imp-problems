// Optimization for better iterative approch O(4^n) :-
class Solution {
public:
    const vector<string> pad = {
        "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"
    };
    
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
		vector<string> result;
        result.push_back("");
        
        for(auto digit: digits) {
            vector<string> tmp;
            for(auto candidate: pad[digit - '0']) {
                for(auto s: result) {
                    tmp.push_back(s + candidate);
                }
            }
            result.swap(tmp);
        }
        return result;
    }
};
/*
// Naive Approch O(4^n)
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        unordered_map<char,string>m;
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
        
        vector<string>letters;
        if(digits.length()==1) {
            string a = m[digits[0]];
            string temp="";
            for(int i=0;i<a.length();i++) {
                temp+=a[i];
                letters.push_back(temp);
                temp = "";
            }
        }
        else if(digits.length()==2) {
            string a = m[digits[0]];
            string b = m[digits[1]];
            string temp="";
            for(int i=0;i<a.length();i++) {
                for(int j=0;j<b.length();j++) {
                    temp+=a[i];
                    temp+=b[j];
                    letters.push_back(temp);
                    temp = "";
                }
            }
        }
        else if(digits.length()==3) {
            string a = m[digits[0]];
            string b = m[digits[1]];
            string c = m[digits[2]];
            string temp="";
            for(int i=0;i<a.length();i++) {
                for(int j=0;j<b.length();j++) {
                    for(int k=0;k<c.length();k++) {
                        temp+=a[i];
                        temp+=b[j];
                        temp+=c[k];
                        letters.push_back(temp);
                        temp="";
                    }
                }
            }
        }
        else if(digits.length()==4) {
            string a = m[digits[0]];
            string b = m[digits[1]];
            string c = m[digits[2]];
            string d = m[digits[3]];
            string temp = "";
            for(int i=0;i<a.length();i++) {
                for(int j=0;j<b.length();j++) {
                    for(int k=0;k<c.length();k++) {
                        for(int l=0;l<d.length();l++) {
                            temp+=a[i];
                            temp+=b[j];
                            temp+=c[k];
                            temp+=d[l];
                            letters.push_back(temp);
                            temp="";
                        }
                    }
                }
            }
        }
        return letters;
    }
};
*/
