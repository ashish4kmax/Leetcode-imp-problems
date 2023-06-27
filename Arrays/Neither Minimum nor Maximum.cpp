class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
         int max=0,min=0;
         int n = nums.size();
         for(int i=0;i<n;i++) {
             if(nums[i]>nums[max])
                 max=i;
             if(nums[i]<nums[min])
                 min=i;
         }
        
         for(int i=0;i<n;i++) {
             if(nums[i]!=nums[max] && nums[i]!=nums[min])
                 return nums[i];
         }
         return -1;
    }
};
