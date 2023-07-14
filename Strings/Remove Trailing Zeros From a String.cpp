class Solution {
public:
    string removeTrailingZeros(string num) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        while(num[num.length()-1]=='0') {
            int n = num.length();
            num.erase(num.begin()+(n-1));
        }

        return num;
    }
};
