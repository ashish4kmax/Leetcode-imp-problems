// TC:- O(n) , SC:- O(n)
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>result;
        vector<int>m;
        // As we have less required size of array or storing frequency of distinct elements. (HASH TABLE using vector)
        m.resize(52);
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
            result.push_back(count);
        }

        return result;
    }
};
