class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maxBit) {
        // At first we are inserting this reduce variable and its value as this could be used to get max possible xor value for each query.
        int reduce = pow(2,maxBit)-1;
        vector<int>ans;
        int x = 0;
        for(int i=0;i<nums.size();i++) {
            x^=nums[i];
            // Now max possible query for each value is reduce - xor till that value;
            ans.push_back(reduce-x);
        }
        // Now we are reversing the ans array as we got ans for max xor in reversed order that is 1 element then for 2,3 etc that's why.
        reverse(ans.begin(),ans.end());

        return ans;
    }
};
