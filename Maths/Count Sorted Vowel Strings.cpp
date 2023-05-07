class Solution {
public:
    int countVowelStrings(int n) {
        // For this question we notice a pattern that is followed if you look closely as a maths point of view.
        /* That is for n=1 o/p=5 and the sequence is 5+(1+3+6)+(1+3+6+10)+(1+3+6+10+15)....... consecutively for n=1,2,3,4...
        so we initialized i=1 and the j=3 for increment and adding it to k.
        */
        int i=1;
        int j=3;
        int k=6;
        int sum=10;
        int res=5;
        if(n==1) {
            return res;
        }
        else {
            while(i<n) {
                res += sum;
                j++;
                k+=j;
                // and sum+=k for that (1+3+6+k) incrementer so we get the output.
                sum+=k;
                i++;
            }

            // Finially in res we get the total no. of sorted vowel strings.
            return res;
        }
    }
};
