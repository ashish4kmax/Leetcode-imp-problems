class Solution {
public:
    vector<int> replaceElements(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        vector<int>res;
        res.push_back(-1);
        int n = nums.size();

        int maxi = nums[n-1];
        for(int i=n-1;i>0;i--) {
            maxi = max(maxi, nums[i]);
            res.push_back(maxi);
        }

        reverse(res.begin(),res.end());
        return res;
    }
};
