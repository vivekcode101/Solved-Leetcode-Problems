class Solution {
    private:
    void solve(vector<vector<int>> &ans,vector<int> nums,int index)
    {
        if(index>=nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i = index;i<nums.size();i++)
        {
            swap(nums[i],nums[index]);
            solve(ans,nums,index+1);
            swap(nums[i],nums[index]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solve(ans,nums,index);
        return ans;
    }
};