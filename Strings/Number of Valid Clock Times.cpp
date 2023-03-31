class Solution {
public:
    int countTime(string time) {
        vector<pair<char,int>>pairs;
        // At first we are making a vector pair to get the position of clock time.
        for(int i=0;i<time.length();i++) {
            if(time.at(i)=='?') {
                pairs.push_back({time.at(i),i});
            }
        }

        // According to positions we make the clock times combinations.
        int combi=1;
        for(int i=0;i<pairs.size();i++) {
            if(pairs[i].second==0) {
                if(time.at(1)-'0'<4) {
                    combi*=3;
                }
                else {
                    combi*=2;
                }
            }
            else if(pairs[i].second==1) {
                if(time.at(0)=='?') {
                    combi=24;
                }
                else if(time.at(0)=='2') {
                    combi=4;
                }
                else {
                    combi*=10;
                }
            }
            else if(pairs[i].second==3) {
                combi*=6;
            }
            else if(pairs[i].second==4) {
                combi*=10;
            }
        }

        return combi;
    }
};
