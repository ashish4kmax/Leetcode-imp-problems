class Solution {
public:
    // O((n)^1/2) Time for checking Prime.
    bool isPrime(int n) {
        if(n<=1) {
            return false;
        }

        for(int i=2;i*i<=n;i++) {
            if(n%i==0) {
                return false;
            }
        }
        return true;
    }

    int diagonalPrime(vector<vector<int>>& nums) {
        int res = 0;
        // This loop will check all the primary and secondary for prime and if it is well use max to get max prime of all.
        for(int i=0;i<nums.size();i++) {
            if(isPrime(nums[i][i])) {
                res = max(res, nums[i][i]);
            }
            if(isPrime(nums[i][nums.size()-i-1])) {
                res = max(res, nums[i][nums.size()-i-1]);
            }
        }

        return res;
    }
};
