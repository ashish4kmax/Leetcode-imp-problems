class Solution {
public:
    // Algorithm to get the prime factors
    void pfs(int n, set<int>&s) {
    if (n <= 1)
        return;
    while (n % 2 == 0) {
        s.insert(2);
        n = n / 2;
    }
    while (n % 3 == 0) {
        s.insert(3);
        n = n / 3;
    }
    for (int i = 5; i * i <= n; i = i + 6) {
        while (n % i == 0) {
            s.insert(i);
            n = n / i;
        }
        while (n % (i + 2) == 0) {
            s.insert(i+2);
            n = n / (i + 2);
        }
    }
    if (n > 3)
        s.insert(n);
    }

    int distinctPrimeFactors(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++) {
            pfs(nums[i],s);
        }        
        return s.size();
    }
};
