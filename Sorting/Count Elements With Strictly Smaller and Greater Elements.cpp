class Solution {
public:
    int countElements(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        sort(nums.begin(),nums.end());
        int n = nums.size();

        int count=0;
        for(int i=1;i<n-1;i++) {
            int c1 = 0;
            int c2 = 0;
            for(int j=0;j<n;j++) {
                if(nums[j]<nums[i]) {
                    c1++;
                }
                else if(nums[j]>nums[i]) {
                    c2++;
                }
            }

            if(c1>0 && c2>0) {
                count++;
            }
        }

        return count;
    }
};
