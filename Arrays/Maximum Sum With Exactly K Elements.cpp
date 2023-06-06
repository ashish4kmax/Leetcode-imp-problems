class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int max = 0;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            if(nums[i]>nums[max]) {
                max = i;
            }
        }

        int res = nums[max];
        int x = res;
        cout<<res;
        for(int i=0;i<k-1;i++) {
            x++;
            res+=(x);
        }

        return res;
    } 
};
