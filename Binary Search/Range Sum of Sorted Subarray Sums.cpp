class Solution {
public:
    const int MOD = 1e9 + 7;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        std::ios_base::sync_with_stdio(false);
        std::cout.tie(nullptr);
        std::cin.tie(nullptr);
        vector<int>temp;
    
        for(int i=0;i<n;i++) {
            int sum = nums[i];
            temp.push_back(sum);
            for(int j=i+1;j<n;j++) {
                sum+=nums[j];
                temp.push_back(sum);
            }
        }

        sort(temp.begin(),temp.end());

        int res = 0;
        for(int i=left-1;i<=right-1;i++) {
            res=(res+temp[i])%MOD;
        }

        return res;
    }
};
