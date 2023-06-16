// TC:- O(n*logn) , SC:- O(n)
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
            if(A[i]==B[i]) {
                count++;
            }
            else {
                if(m[A[i]]==2) count++;
                if(m[B[i]]==2) count++;
            }
            res.push_back(count);
        }

        return res;
    }
};
