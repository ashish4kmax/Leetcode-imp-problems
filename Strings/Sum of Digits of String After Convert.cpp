class Solution {
public:
    int digitssum(int n) {
        int digitsum=0;
        int rem=0;
        while(n>0) {
            rem = n%10;
            digitsum+=rem;
            n/=10;
        }

        return digitsum;
    }

    int getLucky(string s, int k) {
        unordered_map<char,int>m;
        for(int i=0;i<26;i++) {
            m.insert({(char)97+i,i+1});
        }

        int count=0;
        int digitsum=0;
        for(int i=0;i<s.length();i++) {
            digitsum+= digitssum(m[s[i]]);
        }
        count++;

        while(count!=k) {
            digitsum = digitssum(digitsum);
            count++;
        }

        return digitsum;    
    }
};
