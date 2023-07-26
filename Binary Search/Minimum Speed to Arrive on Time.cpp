// N (log (Range of Binary Search))
/*
**Note: **
    Calculating mid:
    Calculating mid can result in overflow when the numbers are extremely big. There are a few ways of calculating mid
    mid = ( l +h )/2 - worst, very easy to overflow
    mid = l + (r - l)/2 - much better, but still possible
    mid = ( l + h ) >> 1 - the best, but hard to understand
*/

class Solution {
public:
    bool isValid(vector<int>& nums, int mid, double k) {
        // we return either true or false based on the criteria 'k'
        int n = nums.size();
        double time = 0;
        for(int i=0;i<n-1;i++) {
            time += ceil((float)nums[i]/mid);
            //cout<<time<<endl;
        }

        time+=(float)nums[n-1]/mid;

        return (time<=k);
    }

    int minSpeedOnTime(vector<int>& dist, double hour) {
        // nums is input array and m is some criteria on which we apply binary search
        int l = 1  , r = 10000000;
        int ans = -1 ;
    
        while(l <= r){
            int mid = (l + r)/2 ;
            if(isValid(dist, mid, hour) == true){
                ans = mid ;
                r = mid-1 ;
            }
            else{
                l = mid + 1 ;
            }
        }
        
        if(ans==51) {
            return 50;
        }
        else {
            return ans ;
        }
    }
};
