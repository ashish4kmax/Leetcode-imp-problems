/*  1) Easy yet tricky concept first we sort to make a contigious increasing/decreasing array. 
    2) And then we do nums[n-1-i] - nums[n-k-i] till we get to the last index '0' where we stop and return res as res will have the minimum difference for k scores. (similar to sliding window approch)
*/
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
