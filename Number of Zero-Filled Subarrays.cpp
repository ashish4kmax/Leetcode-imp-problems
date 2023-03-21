class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int index=0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]==0) {
                index=i;
                break;
            }
        }

        long long count=0;
        long long ans=0;
        for(int i=index;i<nums.size();i++) {
            if(nums[i]==0) {
                // Use to count the no. of consecutive zeroes as we know that no. of possible subarrays is actually a sigma n series that's why and then we add it with ans.
                count++;
                ans+=count;
            }
            else {
                count=0;
            }
        }

        return ans;
    }
};
