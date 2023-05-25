class Solution {
public:
    int binaryGap(int n) {
        int count=0,res=0,i=0,curri=0;
        while(n>0) {
            int rem = n%2;
            if(rem==1) {
                count++;
                if(count==1) {
                    curri = i;
                }
                if(count==2) { 
                    res = max(res, i-curri);
                    count=1;
                    if(count==1) {
                        curri = i;
                    }
                }
            }
            n>>=1;
            i++;
        }
    
        return res;       
    }
};

/* -------------------------------------------------Short code small optimization-------------------------------------
class Solution {
public:
    int binaryGap(int n) {
    
        int count=INT_MIN,res=0;
        while(n>0)
        {
            if(n&1)
            {
                res=max(count,res);
                count=0;
            }
            count++;
            n=n>>1;
        }
        return res;
        
    }
};
*/
