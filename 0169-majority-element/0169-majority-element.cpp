class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int ans;
        int n = nums.size();
        for(int i =0;i<n;i++)
        {
            m[nums[i]]++;
        }
        for(auto i:m)
        {
            if(i.second>n/2)
            {
                ans =  i.first;
            }
        }
        return ans;
    }
};