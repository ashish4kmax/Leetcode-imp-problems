static int fast_io = []() { std::ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return 0; }();
class Solution {
public:
    string sortVowels(string s) {
        int n = s.length();

        string vowels="";

        for(int i=0;i<n;i++) {
            if(s.at(i)=='a' || s.at(i)=='e' || s.at(i)=='i' || s.at(i)=='o' || s.at(i)=='u') {
                vowels+=s[i];
            }
            
            if(s.at(i)=='A' || s.at(i)=='E' || s.at(i)=='I' || s.at(i)=='O' || s.at(i)=='U') {
                vowels+=s[i];
            }
        }

        if(vowels=="") {
            return s;
        }
        else {
            sort(vowels.begin(),vowels.end());
            //cout<<vowels<<endl;
            int size = vowels.size();
            int j = 0;
            for(int i=0;i<n;i++) {
                if(j==size) break;

                if(s.at(i)=='a' || s.at(i)=='e' || s.at(i)=='i' || s.at(i)=='o' || s.at(i)=='u') {
                    s[i] = vowels[j];
                    j++;
                }
                else if(s.at(i)=='A' || s.at(i)=='E' || s.at(i)=='I' || s.at(i)=='O' || s.at(i)=='U') {
                    //cout<<s.at(i)<<endl;
                    s[i] = vowels[j];
                    j++;
                }
            }
            return s;
        }
    }
};
