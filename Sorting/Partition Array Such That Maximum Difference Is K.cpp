// Simple technique sort and sliding window.
class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        //The below two statements for faster processing speed (reduce TC). 
        ios_base::sync_with_stdio(false);  
        cin.tie(NULL);
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int res = 0;
        for(int i=0,j=0;i<n && j<n;) {
            if((nums[j]-nums[i])<=k) {
                j++;
            }
            else {
                res++;
                i = j;
            }
        }

        res++;

        return res;
    }
};
