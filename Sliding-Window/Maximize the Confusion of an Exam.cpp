class Solution {
public:
    int maxConsecutiveAnswers(string aK, int k) {
        std::ios_base::sync_with_stdio(false);
        std::cout.tie(nullptr);
        std::cin.tie(nullptr);
        int n = aK.size();
        int cT = 0;
        int cF = 0;

        int res = INT_MIN;
        int i,j;

        // For 'F' char that is cF>k or not 
        for(i=0,j=0;i<n && j<n;) {
            if(aK[j]=='F') {
                cF++;
                j++;
            }
            else {
                cT++;
                res = max(res,cT+cF);
                j++;
            }

            while(cF>k) {
                if(aK[i]=='F') {
                    cF--;
                    i++;
                    res = max(res,cT+cF);
                }
                else {
                    cT--;
                    i++;
                    res = max(res,cT+cF);
                }
            }
        }

        if(cF<=k) res = max(res, cT+cF);

        // For 'T' char that is cT>k or not
        cT=0;
        cF=0;

        for(i=0,j=0;i<n && j<n;) {
            if(aK[j]=='T') {
                cT++;
                j++;
            }
            else {
                cF++;
                res = max(res,cT+cF);
                j++;
            }

            while(cT>k) {
                if(aK[i]=='T') {
                    cT--;
                    i++;
                    res = max(res,cT+cF);
                }
                else {
                    cF--;
                    i++;
                    res = max(res,cT+cF);
                }
            }
        }

        if(cT<=k) res = max(res, cT+cF);
        
        return res;
    }
};
