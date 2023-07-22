// Given an integer array nums of 2n integers, group these integers into n pairs (a1, b1), (a2, b2), ..., (an, bn) such that the sum of min(ai, bi) for all i is maximized. Return the maximized sum.
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();

        int res = 0;
        for(int i=0;i<n-1;i+=2) {
            res+=min(nums[i],nums[i+1]);
        }

        return res;
    }
};
