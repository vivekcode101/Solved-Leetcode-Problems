class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> window;  // Store indices of elements in the current window
        
        for (int i = 0; i < nums.size(); ++i) {
            // Remove elements that are out of the current window
            while (!window.empty() && window.front() < i - k + 1) {
                window.pop_front();
            }
            
            // Remove smaller elements as they cannot be the maximum in the window
            while (!window.empty() && nums[window.back()] < nums[i]) {
                window.pop_back();
            }
            
            window.push_back(i);  // Add the current index to the window
            
            if (i >= k - 1) {  // Window is fully formed
                ans.push_back(nums[window.front()]);  // Maximum in the current window
            }
        }
        
        return ans;
    }
};
