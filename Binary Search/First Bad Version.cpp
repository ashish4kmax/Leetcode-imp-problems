class Solution {
public:
    // To be aware of the overflow cases as there is a possibility of n+1 as 2^31-1+1 which is out of range for int so no further step that's why we do mid = start+(end-start)/2 .
    // If we found out the badversion we take end = mid and the while loop ends at end we return end as that's the final and the first bad version.
    // else we change the new starting point as mid .
    int firstBadVersion(int n) {
        int start=0, end=n;
        while(end-start>1){
            int mid=start+(end-start)/2;
            /** mid = (start+end)) / 2; **/
            if(isBadVersion(mid))  end=mid;
            else  start=mid;
        }
        return end;
    }
};
