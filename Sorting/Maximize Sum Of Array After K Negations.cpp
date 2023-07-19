class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
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

        int min = 0;
        for(int i=0;i<n;i++) {
            if(nums[i]<nums[min]) min = i;
        }
        
        while(op<k) {
            if(nums[min]<0) {
                nums[min] = abs(nums[min]);
                op++;
            }
            else if(nums[min]==0) {
                op++;
            }
            else {
                nums[min] = -nums[min];
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
