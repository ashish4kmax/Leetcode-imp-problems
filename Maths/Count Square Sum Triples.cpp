class Solution {
public:
    int countTriples(int n) {
        double ss=0;
        int count=0;
        for(double a=1;a<n;a++) {
            for(double b=1;b<n;b++) {
                ss = sqrt(pow(a,2)+pow(b,2));
                if(!(ss>floor(ss) && ss<ceil(ss)) && ss<=n) {
                    //cout<<a<<b<<endl;
                    count++;
                }
            }
        }

        return count;
    }
};
