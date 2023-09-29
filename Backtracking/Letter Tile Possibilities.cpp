// Overall TC (n^2*2^n) can be improved to O(2^n) maybe.
class Solution {
public:
    int fact(int n) {
        if(n==0) return 1;

        int f = 1;
        for(int i=1;i<=n;i++) {
            f*=i;
        }
        return f;
    }

    int numTilePossibilities(string tiles) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int n = tiles.length();
        int res = 0;
        int k = 7-n;

        unordered_map<string,bool>check;
        for(int i=1;i<pow(2,n);i++) {
            bitset<7> decimal(i);
            string s = decimal.to_string();

            string test="";

            for(int j=7-n;j<s.length();j++) {
                if(s[j]=='1') {
                    test+=tiles[j-k];
                }
            }
            
            sort(test.begin(),test.end());

            if(check[test]==false) {
                vector<char>freq(91,0);

                for(int j=0;j<test.length();j++) {
                    freq[(int)test[j]]++;
                }

                int count = 0;
                count+=fact(test.length());
                for(int j=65;j<freq.size();j++) {
                    count/=fact(freq[j]);
                }
                
                res+=count;
            }

            sort(test.begin(),test.end());
            check[test] = true;
        }
        
        return res;
    }
};
