class Solution {
public:
    int minDeletions(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        map<char,int>m1;
        map<int,bool>m2;

        int deletions = 0;
        int n = s.length();
        for(int i=0;i<n;i++) {
            m1[s[i]]++;
        }

        for(auto i = m1.rbegin(); i!=m1.rend(); i++) {
            if(m2[i->second]) {
                int freq = i->second;
                while(m2[freq]) {
                    deletions++;
                    freq--;
                }
                if(freq!=0) {
                    m2[freq] = true;
                }
            }
            m2[i->second] = true;
        }

        return deletions;
    }
};
