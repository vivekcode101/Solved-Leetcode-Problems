class Solution {
    private:
    int solve(int n  , vector<int>&dp)
    {
        if(n<=1)
            return 1;
        if(dp[n]!=-1)
            return dp[n];
        dp[n]=solve(n-1,dp)+solve(n-2,dp);
        return dp[n];
    }
public:
    int climbStairs(int n) {
        // if(n<=1)
        //     return 1;
        // int ans = 0;
        // ans = climbStairs(n-1)+climbStairs(n-2);
        // return ans;
        //coding using recursion gives TLE
        
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};