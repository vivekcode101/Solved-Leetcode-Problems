class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>>ans;
        priority_queue<pair<int,pair<int,int>>> sol;
        for(int i =0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                int sum = nums1[i]+nums2[j];
                if(sol.size()<k)
                {
                    sol.push({sum,{nums1[i],nums2[j]}});
                }
                else if(sum<sol.top().first)
                {
                    sol.pop();
                    sol.push({sum,{nums1[i],nums2[j]}});
                }
                else
                    break;
            }
        }
        while(!sol.empty())
        {
            ans.push_back({sol.top().second.first,sol.top().second.second});
            sol.pop();
        }
        return ans;
    }
};