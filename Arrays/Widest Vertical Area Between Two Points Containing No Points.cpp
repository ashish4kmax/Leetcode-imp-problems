class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int>nums;
        int n = points.size();
        for(int i=0;i<n;i++) {
            nums.push_back(points[i][0]);
        }

        sort(nums.begin(),nums.end());

        vector<int>ans;
        for(int i=0;i<n-1;i++) {
            if(nums[i+1]!=nums[i]) {
                ans.push_back(nums[i]);
            }
        }
        ans.push_back(nums[n-1]);

        int res = 0;
        for(int i=0;i<ans.size()-1;i++) {
            res = max(res, abs(ans[i+1]-ans[i]));
        }

        return res;
    }
};
