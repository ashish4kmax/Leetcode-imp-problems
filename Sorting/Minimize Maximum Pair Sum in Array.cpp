/*
The technique is to sort and observe the patterns it make here if we sort and do n/2 iterations and then if we just check max of all the i+n-i-1 we get the minimum of the maximum pair sum.
*/
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int res = nums[0]+nums[n-1];
        for(int i=1;i<=n/2;i++) {
            res = max(res, nums[i]+nums[n-i-1]);
        }

        return res;
    }
};
