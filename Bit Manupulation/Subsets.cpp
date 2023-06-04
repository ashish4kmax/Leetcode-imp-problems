// Standard subsets solution using backtracking approch and bit-manupulation
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>temp;
        int n = nums.size();
        int psize = 1<<n;
        for(int i = 0; i<psize; i++) {
            for(int j=0; j<n; j++) {
                if( (1 & (i>>j)) ) {
                    temp.push_back(nums[j]);
                }
            }
            res.push_back(temp);
            temp.clear();
        }   

        return res;
    }
};
