class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int count1;
        int count2;
        int res;
        int n;
        for(int i=left;i<=right;i++) {
            res=i;
            n=0;
            while(res!=0)  {
                res=res&(res-1);
                n++;
            }

            for(int i=2;i*i<=n;i++) {
                if(n%i==0) {
                    count1++;
                }
            }

            if(count1==0 && n!=1) {
                count2++;
            }

            count1=0;
        }
        return count2;
    }
};
