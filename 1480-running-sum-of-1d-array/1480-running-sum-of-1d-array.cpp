class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> sumans(nums.size());
        sumans[0]=nums[0];
        for(int i =1 ;i<n;i++)
        {
            sumans[i] = sumans[i-1]+nums[i];
        }
        return sumans;
    }
};