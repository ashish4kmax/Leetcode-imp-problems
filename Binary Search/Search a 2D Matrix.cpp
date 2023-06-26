class Solution {
public:
    int bsearch(vector<int>&nums , int low, int high, int x) {
        if(low>high) return false;
        
        int mid = (low+high)/2;
        
        if(nums[mid] == x) return true;
        else if(nums[mid] > x) return bsearch(nums, low, high-1, x);
        else return bsearch(nums, low+1, high, x);
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i=0;i<m;i++) {
            if(bsearch(matrix[i], 0, n-1, target)) return true;
        }

        return false;
    }
};
