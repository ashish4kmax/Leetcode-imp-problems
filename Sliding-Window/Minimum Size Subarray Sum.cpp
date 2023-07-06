class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int res = INT_MAX;
        int j,i;

        for(i=0,j=0 ;j<n; ) {
            while(sum>=target) {
                sum-=nums[i];
                res = min(res, j-i);
                i++;
            }   
            
            sum += nums[j];
            j++;
        }

        while(sum>=target) {
            sum-=nums[i];
            res = min(res, j-i);
            i++;
        }

        if(res == INT_MAX) return 0;        
        else return res;
    }
};
