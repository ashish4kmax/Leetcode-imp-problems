class Solution {
public:
    int bsearch(vector<int>&nums, int low, int high, int x) {
        int mid = (low+high)/2;

        if(low>high) return -1;

        if(nums[mid] == x) return mid;
        else if(nums[mid]>x) {
            return bsearch(nums, low, mid-1, x);
        }
        else {
            return bsearch(nums, mid+1, high, x);
        }
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        return bsearch(nums,0,n-1,target);    
    }
};
