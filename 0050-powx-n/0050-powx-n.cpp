// class Solution {
// public:
//     double myPow(double x, int n) {
//         double result=1.0;
//         if(n>0)
//         {
//             for(double i=1; i<=n;i++)
//             {
//                 result*=x;
//             }
//         }
//         if(n<0)
//         {
//             for(double i=0;i>n;i--)
//             {
//                 result /=x;
//             }
//         }
//         return result;
//     }
// };


class Solution {
public:
    double myPow(double x, int n) {
        double res = 1;
        while (n) {
            if (n % 2) res = n > 0 ? res * x : res / x;
            x = x * x;
            n /= 2;
        }
        return res;
    }
};
