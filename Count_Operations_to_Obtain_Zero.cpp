class Solution {
public:
    vector<int> sumZero(int n) {
        // We are given input as n the logic is pretty simple , to make array sum equals to zero we can apply the logic of inverse of positive till n/2.
        vector<int>ans;
        if(n%2==0) 
            // For even numbers we need to do it from i=1 to i=n/2 as in even array length sum of even same elements + inverse of same elements equls zero.
            for(int i=1;i<=n/2;i++) {
                ans.push_back(i);
                ans.push_back(-i);
            }
        }
        else {
            // Same concept for odd numbers can be applied but we need to insert zero so that when added to it the array sum remains zero.
            ans.push_back(0);
            for(int i=1;i<=n/2;i++) {
                ans.push_back(i);
                ans.push_back(-i);
            }
        }
        return ans;
    }
};

//Thank you!!
