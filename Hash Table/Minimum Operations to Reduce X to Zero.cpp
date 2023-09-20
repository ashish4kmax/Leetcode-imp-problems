class Solution {
public:
    // Sliding window approch to find a subarray with sum = total_sum-x of maximum length subarray to get minimum deletions or operations.
    int minOperations(vector<int>& nums, int x) 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int i,len=0,sum1=0,sum2=0;
        for(i=0;i<nums.size();i++)
            sum2+=nums[i];                  
			
        sum2-=x;  
		
        // If the total_sum==x then whole array is the final ans.
        if(sum2==0)       
            return nums.size();

        // else we apply sliding window and find the maximum subarray length of sum = total_sum-x.
        for(int i=0,j=0;j<nums.size();j++)
        {
            sum1+=nums[j];
			
            while(i<nums.size()&&sum1>sum2)
                sum1-=nums[i++];
				
            if(sum1==sum2)  
                len=max(len,j-i+1);  
        }

        // if subarray is not found.
        if(!len)        
            return -1;
        return nums.size()-len;
    }
};
