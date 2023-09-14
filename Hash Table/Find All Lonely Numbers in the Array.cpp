class Solution {
public:
    // using a vector map is optimization with TC of O(n)
    vector<int> findLonely(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int n = nums.size();
        unordered_map<int,int>map;

        for(int i=0;i<n;i++) {
            map[nums[i]]++;
        } 

        vector<int>res;
        for(int i=0;i<n;i++) {
            if(map[nums[i]-1]==0 && map[nums[i]+1]==0 && map[nums[i]]==1) res.push_back(nums[i]);
        }
        
        return res;
    }
};
