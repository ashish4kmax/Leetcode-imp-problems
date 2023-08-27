class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        long long res = 0;
        unordered_map<int,bool>map;
        
        int size = 0;
        int i=1;
        while(size<n) {
            if(map[target-i]==false) {
                cout<<i<<endl;
                map[i] = true;
                res+=i;
                size++;
                i++;
            }
            else {
                i++;
            }
        }
        
        return res;
    }
};
