class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            leftsum+=nums[i];
        }
        int rightsum = 0;
        for(int i = 0;i<n;i++)
        {
            leftsum = leftsum - nums[i];
            if(leftsum==rightsum)
            {
                return i;
            }
            rightsum+=nums[i];
        }
        return -1;
    }
};