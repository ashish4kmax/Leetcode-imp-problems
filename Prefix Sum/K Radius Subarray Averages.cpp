// Naive approch O(n) time.
class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> res (n, -1);
        if(k==0) return nums;
        if(k*2>=n) return res;
        else {
            vector<int>temp;
            long long int avg = 0;
            int j=0;
            int i;
            for(i=0;i<n;i++) {
                if(i>k*2+1) {
                    avg -= nums[j];
                    avg += nums[i-1];
                    temp.push_back(avg/(k*2+1));
                    j++;
                    
                }
                else if(i==k*2+1) {
                    temp.push_back(avg/(k*2+1));
                }
                else {
                    avg += nums[i];
                }
            }

            if(temp.size()>0) {
                avg -= nums[j];
                avg += nums[i-1];
                temp.push_back(avg/(k*2+1));
            }
            else {
                temp.push_back(avg/(k*2+1));
            }

            for(int i=k,j=0; j<temp.size(); i++,j++) {
                res[i] = temp[j];
            }

            return res;
        }
    }
};

/*
Optimal Solution :- Prefix Sum time O(n), space O(n) 

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        int windowSize = 2 * k + 1;
        vector<int> ans(n, -1);

        if (n < windowSize) {
            return ans;
        }

        vector<long long> prefixSum(n + 1);
        for (int i = 0; i < n; ++i) {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }

        for (int i = k; i + k < n; ++i) {
            ans[i] = (prefixSum[i + k + 1] - prefixSum[i - k]) / windowSize;
        }

        return ans;
    }
};
*/
