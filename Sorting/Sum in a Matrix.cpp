class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();

        cout<<m<<" "<<n;
        int res = 0;

        for(int i=0;i<n;i++) {
            sort(nums[i].begin(),nums[i].end());
        }


        for(int i=0;i<m;i++) {
            vector<int>temp;
            for(int j=0;j<n;j++) {
                temp.push_back(nums[j][i]);
            }
            sort(temp.begin(),temp.end());
            res+=temp[temp.size()-1];
        }

        return res;
    }
};
