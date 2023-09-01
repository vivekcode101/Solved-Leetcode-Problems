class Solution {
public:
    vector<int> countBits(int n) {
//         vector<int>ans;
//         int cnt = 0;
        
//         for(int i =0;i<=n;i++)
//         {
//             while(i>0)
//             {
//                 cnt+=(n&1);
//                 n=n>>1;
//             }
//             ans.push_back(cnt);
//         }
//         return ans;
    //     vector<int>ans(n+1,0);
    //     for(int i = 0;i<=n;i++)
    //     {
    //         ans[i] = ans[i & (i - 1)] + 1;
    //     }
    // return ans;
    // }
        vector<int>ans(n+1,0);
        int offset = 1;
        for(int i =1;i<=n;i++)
        {
            if(2*offset == i)
            {
                offset*=2;
            }
            ans[i] = ans[i-offset]+1;
        }
        return ans;
    }
};