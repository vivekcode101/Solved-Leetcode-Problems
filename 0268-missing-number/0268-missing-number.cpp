class Solution {
public:
    int missingNumber(vector<int>& nums) {
     sort(nums.begin(), nums.end());
        int i = 0;
        int j = 0;
        int ans;
        while(i<nums.size())
        {
            if(i==nums[j])
            {
               i++;
                j++; 
            }
            else
              {
                ans = i;
                break;   
              }
            
        }
        return ans;
    }     
};