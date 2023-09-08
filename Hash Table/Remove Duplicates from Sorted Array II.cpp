// O(nlogn) time
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        vector<int>res;
        map<int,int>m;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            m[nums[i]]++;
            if(m[nums[i]]<=2) {
                res.push_back(nums[i]);
            }
        }

        nums = res;

        return nums.size();
    }
};

// can be optimized using two pointers or a vector map with O(n) time complexity.
