class Solution {
public:
    int maxdigit(int n)
    {
        int maxi = -1;
        while(n>0)
        {
         int digit = n%10;
         maxi = max(maxi,digit);
            n/=10;
        }
        return maxi;
    }
    int maxSum(vector<int>& nums) {
        int maxsum = -1;
        for(int i = 0;i<nums.size();i++)
        {
            for(int j = i+1;j<nums.size();j++)
            {
                if(maxdigit(nums[j]) == maxdigit(nums[i]))
                {
                    int sum = nums[j]+nums[i];
                    maxsum = max(maxsum,sum);
                }
            }
        }
        return maxsum;
    }
};