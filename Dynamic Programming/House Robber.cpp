// very very important problem it's an optimization problem try to use a and b then prevs to solve this
/*
TC:-O(n)
SC:-O(1)

Basically its like taking idx = 0 and idx = 1 as a and b and calculating the values and updating the maximum till we reach last index updating the value of a and b at each even for a and odd for b idx.
*/
class Solution {
public:
    int rob(vector<int>& arr) {
        int a = 0;
        int b = 0;
        int n = arr.size();

        for(int i=0;i<n;i++) {
            if(i%2==0) {
                a = max(a+arr[i], b);
            }
            else {
                b = max(a, b+arr[i]);
            }
        }
        
        return max(a,b);
    }
};
