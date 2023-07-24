class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>temp;
        temp = score;
        sort(temp.begin(),temp.end());
        reverse(temp.begin(),temp.end());

        unordered_map<int,string>m;
        int n  = score.size();
        int incre = 4;

        for(int i=0;i<n;i++) {
            if(i==0) {
                m[temp[i]] = "Gold Medal";
            }
            else if(i==1) {
                m[temp[i]] = "Silver Medal";
            }
            else if(i==2) {
                m[temp[i]] = "Bronze Medal";
            }
            else {
                m[temp[i]] = to_string(incre);
                incre++;
            }
        }

        vector<string>res;

        for(int i=0;i<n;i++) {
            string check = m[score[i]];
            res.push_back(check);
        }

        return res;
    }
};
