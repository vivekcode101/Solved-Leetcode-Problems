class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;
        int ans;        
          while(n!=0)
          {           
               int digit = n%10;
              sum +=digit;
              product*=digit;
              n/=10;
           
          }
        ans = product-sum;
        return ans;
    }
};