//Sieve of Eratosthenes algorithm
class Solution {
public:
    int countPrimes(int n) {
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

        int count = 0;
	    for(int i = 2; i<n; i++) {
		    if(isPrime[i]) count++;
	    }

        return count;
    }
};
