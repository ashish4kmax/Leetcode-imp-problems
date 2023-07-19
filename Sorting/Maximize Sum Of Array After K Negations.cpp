class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        sort(nums.begin(),nums.end());
        int n = nums.size();

        int i = 0;
        int op = 0;

        while(i!=n-1 && op<k && nums[i]<0) {
            if(nums[i]<0) {
                nums[i] = abs(nums[i]);
                i++;
                op++;
            }
        }   

        if(i!=0 && i!=n && nums[i-1]<nums[i]) {
            i-=1;
        }

        while(op<k) {
            if(nums[i]<0) {
                nums[i] = abs(nums[i]);
                op++;
            }
            else if(nums[i]==0) {
                op++;
            }
            else {
                nums[i] = -nums[i];
                op++;
            }
        }

        int res = 0;

        for(int i=0;i<n;i++) {
            res+=nums[i];
        }

        return res;
    }
};
