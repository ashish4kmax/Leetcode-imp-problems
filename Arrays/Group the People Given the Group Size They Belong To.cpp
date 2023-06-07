class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& nums) {
        vector<vector<int>>res;
        unordered_map<int,vector<int>>m;
        int n=nums.size();
        for(int i=0;i<n;i++) {
            if(nums[i]==m[nums[i]].size()) {
                res.push_back(m[nums[i]]);
                m.erase(nums[i]);
            }
            m[nums[i]].push_back(i);
        }

        for(auto i:m) {
           res.push_back(i.second);
        }

        return res;
    }
};
