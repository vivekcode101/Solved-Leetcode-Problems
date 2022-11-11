class Solution {
public:
    long long int binarysearch(int n)
    {
        int s =0;
        int l = n;
        long long int mid = s + (l-s)/2;
        long long int ans =-1;
        while(s<=l)
        {
            long long int square = mid*mid;
            if(square==n)
            {
                return mid;
            }
            if(square<n)
            {
                ans = mid;
                s = mid+1;
            }
            else
            {
                l = mid-1;
            }
             mid = s + (l-s)/2;
        }
        return ans;
    }
    int mySqrt(int x) {
        return binarysearch(x);
    }
};