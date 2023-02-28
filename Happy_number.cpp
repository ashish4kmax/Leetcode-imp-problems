class Solution {
public:
    // To get the square sum of digits.
    int numSquareSum(int n) {
        int squareSum = 0;
        while (n) {
            squareSum += (n % 10) * (n % 10);
            n /= 10;
        }
        return squareSum;
    }

    bool isHappy(int n) {
        unordered_map<int,bool>m; // This map is created to know weather if a loop exists then it definietly is not a happy number.
        while(true) {
            if(n==1) {
                return true;
            }
            else {
                m.insert({n,true});
                n=numSquareSum(n);
                if(m.find(n)!=m.end()) {  // If the number exists in the map or a hashset then definietly the no. is not a happy number.
                    return false;
                }
            }
        }

        return true;
    }
};
