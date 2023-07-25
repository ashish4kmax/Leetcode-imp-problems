class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int res = nums[n-1]-nums[n-k];
        int i=0;

        while((n-k-i)!=-1) {
            res = min(res, (nums[n-1-i]-nums[n-k-i]));
            i++;
        }

        return res;
    }
};
