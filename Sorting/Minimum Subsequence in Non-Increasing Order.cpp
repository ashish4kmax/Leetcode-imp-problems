class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int>res;
        int n = nums.size();
        // Sorting will make it easier.
        sort(nums.begin(),nums.end());

        int lsum = 0;
        // We do the left sum first.
        for(int i=0;i<n;i++) {
            lsum+=nums[i];
        }
        
        /* 
        Now to get the minimum subsequence size for lsum<rsum we iterate from last to first index till lsum<rsum and 
        pusing nums[i] to res for genrating the min subseq. respectively and returning res as the answer.
        */
        int rsum=0;
        for(int i=n-1;i>=0;i--) {
            if(lsum<rsum) {
                break;
            }
            rsum+=nums[i];
            lsum-=nums[i];
            res.push_back(nums[i]);
        }

        return res;
    }
};
