// class Solution {
// public:
//     bool checkjump(vector<int>& nums, int i)
//     {
//         int jump = nums[i];
//         if (jump == 0 && i != nums.size() - 1)
//         {
//             return false;
//         }
//         else if (jump > 0)
//         {
//             i++;
//             if (!checkjump(nums, i))
//             {
//                 return false;
//             }
//         }
//         return true;
//     }

//     bool canJump(vector<int>& nums) {
//         int i = 0;
//         bool ans = checkjump(nums, i);
//         return ans;
//     }
// };

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int lastPosition = nums.size() - 1;
        
        for (int i = nums.size() - 2; i >= 0; i--) {
            if (i + nums[i] >= lastPosition) {
                lastPosition = i;
            }
        }
        
        return lastPosition == 0;
    }
};
