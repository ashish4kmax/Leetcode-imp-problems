class Solution {
public:
    int sumOfMultiples(int n) {
        int sum=0;
        // We loop from 1 to n numbers in the range and if they are divisible by 3,5 or 7 either of them we add them to sum. 
        for(int i=1;i<=n;i++) {
            if(i%3==0 || i%5==0 || i%7==0) {
                sum+=i;
            }
        }
        // At the end we just return the result.
        return sum;
    }
};
