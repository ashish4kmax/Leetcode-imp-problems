class Solution {
public:
    string largestOddNumber(string num) {
        int count=0;
        for(int i=num.length()-1;i>-1;i--) {
            if((num[i]-'0')%2!=0) {
                break;
            }
            else {
                count++;
            }
        }
        for(int i=0;i<count;i++) {
            num.erase(num.length()-1);
        }

        return num;
    }
};
