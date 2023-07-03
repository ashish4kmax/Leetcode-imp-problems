class Solution {
public:
    int bsearch(vector<int>& nums, int low, int high, int x) {
        if(low>high) return -1;

        int mid = (low+high)/2;

        if(nums[mid]==x) return mid;
        else if(nums[mid]>x) return bsearch(nums, low, mid-1, x);
        else return bsearch(nums, mid+1, high, x);
    }

    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());

        int n = arr.size();

        for(int i=0;i<n;i++) {
            int search = bsearch(arr, 0, n-1, arr[i]*2);
            if(search>-1 && search!=i) return true; 
        }

        return false;
    }
};
