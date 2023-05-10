class Solution {
public:
    // The sieve function is used to find the total no. of prime numbers from 1 to n.
    int sieve(int n) {
        int count=0;
        if(n <= 1)
		    return 0;
	    bool isPrime[n+1];
        fill(isPrime, isPrime + n + 1, true);
	    for(int i=2; i*i <= n; i++) {
            if(isPrime[i]) {
                for(int j = 2*i; j <= n; j = j+i) {
				    isPrime[j] = false;
			    }
		    }
	    }   
	    for(int i = 2; i<=n; i++) { 
            if(isPrime[i])
                count++;
	    }
        return count;
    }

    // This function is used to calcualate factorial with execption and overflow problem solved cases.
    unsigned long long fact(int n) {
        const unsigned int M = 1000000007;
        unsigned long long f = 1;
        for (int i = 1; i <= n; i++)
            f = (f*i) % M;  // Now f never can
                        // exceed 10^9+7
        return f;
    }
    
    // The main Driver function to get the answer for Prime Arrangements.
    int numPrimeArrangements(int n) {
        unsigned long long np=0;
        unsigned long long p=0;
        p = sieve(n);
        np = n-p;
        int M = 1000000007;
        int res = fact(np)*fact(p)%M;
        return res;
    }
};
