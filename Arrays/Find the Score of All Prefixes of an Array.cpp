class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        vector<long long>res;

        int n = nums.size();
        long long sum = 0;
        int maxi = INT_MIN;
        for(int i=0;i<n;i++) {
            maxi = max(maxi,nums[i]);
            sum+= (nums[i]+maxi);
            res.push_back(sum);
        }

        return res;
    }
};
