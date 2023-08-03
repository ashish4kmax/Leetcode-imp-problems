class Solution {
public:
    int getKth(int lo, int hi, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<pair<int,int>>m;

        for(int i=lo;i<=hi;i++) {
            int x = i;
            int pv = 0;
            while(x!=1) {
                if(x%2==0) {
                    x=x/2;
                    pv++;
                }
                else {
                    x=3*x+1;
                    pv++;
                }
            }
            m.push_back({pv,i});
        }

        sort(m.begin(),m.end());

        int c=1;
        for(int i=0;i<m.size();i++) {
            if(c==k) return m[i].second;
            c++;
        }

        return -1;
    }
};
