// TC:-O(n) and SC:-O(n)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int>map (n+1, 0);

        for(int i=0;i<n;i++) {
            if(map[nums[i]]>0) return nums[i];
            map[nums[i]]++;
        }

        return -1;
    }
};
