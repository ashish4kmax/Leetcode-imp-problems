// A very good binary search problem!!
// Helps to learn more problems examples of book allocation problems.
class Solution {
public:
    bool isFeasible(vector<int>& arr,int n, int k, int ans) {
        int req=1,sum=0;
        for(int i=0;i<n;i++){
            if(sum+arr[i]>ans){
                req++;
                sum=arr[i];
            }
            else{
                sum+=arr[i];
            }
        }
        return (req<=k);
    }

    int minCap(vector<int>&nums, int n, int low, int high, int days) {
        int res = 0;
        while(low<=high) {
            int mid = (low+high)/2;
            if(isFeasible(nums, n, days, mid)) {
                res = mid;
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }

        return res;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int max = 0;
        int sum = 0;

        for(int i=0;i<n;i++) sum+=weights[i];

        for(int i=0;i<n;i++) {
            if(weights[i]>weights[max]) max=i;
        }

        max = weights[max];

        int res = minCap(weights, n, max, sum, days);

        return res;
    }
};
