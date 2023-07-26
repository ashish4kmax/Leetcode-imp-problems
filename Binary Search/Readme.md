# Template to solve binary search on answers:
```
bool isValid(vector<int>& nums, int mid, int k){
	// we return either true or false based on the criteria 'k'
}

int function(vector<int>& nums, int k) {
   // nums is input array and m is some criteria on which we apply binary search
    int l = minimum  possible answer  , r = maximum possible answer  ;
    int ans = -1 ;
	
    while(l <= r){
        int mid = (l + r)/2 ;
        if(isValid(nums, mid, k) == true){
            ans = mid ;
            r = mid-1 ;
        }else{
            l = mid + 1 ;
        }
		
    }
    return ans ;
}
```
# Time Complexity of every problem : N (log (Range of Binary Search)) where,

* N = size of array and Range of Binary Search = high - low
### Note: 
* Calculating mid:
* Calculating mid can result in overflow when the numbers are extremely big. There are a few ways of calculating mid
<ul>
    <li>mid = ( l +h )/2 - worst, very easy to overflow</li>
    <li>mid = l + (r - l)/2 - much better, but still possible</li>
    <li>mid = ( l + h ) >> 1 - the best, but hard to understand</li>
</ul>

### Why Integer Overflows?

* If we take (low+high)/2 , if low and high is both high is nearly 10 ^ 9 . in that case sum of both (low+high) exceeds the integer range. that causes integer overflow. For the sake of simplicity, I'll use the first condition.
* For further details use this link https://leetcode.com/discuss/study-guide/3444552/binary-search-on-answer-template-generic-template
