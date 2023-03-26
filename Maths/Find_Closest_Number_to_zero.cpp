class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        vector <pair<int,int>> pairs;
        for(int i=0;i<nums.size();i++) {
            pairs.push_back({abs(nums[i]-0),nums[i]});        
        }

        sort(pairs.begin(),pairs.end());

        int low=pairs[0].first;

        vector<int>ans;

        for(int i=0;i<pairs.size();i++) {
            if(pairs[i].first==low) {
                ans.push_back(pairs[i].second);
            }
        }

        sort(ans.begin(),ans.end());

        return ans[ans.size()-1];
    }
};
