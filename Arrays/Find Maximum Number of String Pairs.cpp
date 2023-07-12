class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        int res = 0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                string temp = words[j];
                reverse(temp.begin(),temp.end());

                if(i!=j && temp==words[i]) {
                    res++;
                }
            }
        }

        return res/2;
    }
};
