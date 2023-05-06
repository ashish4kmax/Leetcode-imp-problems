class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int j=nums.size()-1;
        for(int i=0;i<j;) {
            if(nums[i]+nums[j]>target) {
                j--;
            }
            else {
                break;
            }
        }

        int count=0;
        for(int i=0;i<=j;i++) {
            if((nums[i]+nums[j])>target) {
                count++;
            }
        }

        for(int i=0;i<j;i++) {
            if((nums[i]*2)>target) {
                count++;
            }
        }

        int res = pow(2,j+1)-1-count;  
        return res;
    }
};
