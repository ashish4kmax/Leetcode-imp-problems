class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,bool>m;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]<0) {
                m.insert({nums[i],true});
            }
        }

        int ans=-1;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]>0) {
                if(m[-nums[i]]==true) {
                    ans = max(ans,nums[i]);
                }
            }
        }

        return ans;
    }
};
