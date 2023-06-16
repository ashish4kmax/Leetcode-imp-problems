// Naive Approch
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>res;
        unordered_map<int,int>m;
        int n = A.size();
        int count=0;
        for(int i=0;i<n;i++) {
            m[A[i]]++;
            m[B[i]]++;
            count=0;
            for(auto i:m) {
                if(i.second==2) count++;
            }

            res.push_back(count);
        }

        return res;
    }
};
